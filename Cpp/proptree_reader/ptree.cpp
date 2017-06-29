/*
 * PropTree SVG Reader - Test
 *
 * This file is a short "playground" for me to figure out how to properly read
 * and handle SVG files in C++. This code, in an edited form, is likely going
 * to make it's way into the C++ version of MeshmerizeMe that I'm working on.
 *
 * This code requires the header-only library "prettyprint.hpp", which can be
 * found here https://github.com/louisdx/cxx-prettyprint.
 */

#include <iostream>
#include <string>

// map and set are included because they are used by SvgElem and SvgFile.
#include <map>
#include <set>

// these are used to get the property_tree from Boost, used to parse the SVG
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/xml_parser.hpp>

// external library; allows me to print the maps like dicts in Python. Yay :)
#include "prettyprint.hpp"


// just to make this more readable
using boost::property_tree::ptree;



/**
 * Struct to hold an SVG element. This is done to somewhat emulate
 * the element-tree setup from Python. This will be used by a class that should
 * hold all the information of the SVG file read.
 */
struct SvgElem{
    std::string name;
    std::map<std::string, std::string> attr;
};

/**
 * The SvgFile  class implements an object designed to hold all the geometric
 * information found in a particular SVG file.
 */
class SvgFile{
public:
    SvgFile() = default; // default constructor
    SvgFile(const std::string &fname);  // constructor, takes filename
    std::vector<SvgElem> geo_objects;   // holds the geometric objects
private:
    std::set<std::string> parsable = {"path"};
    std::vector<SvgElem> parse_geo_objects(ptree tree);
};

SvgFile::SvgFile(const std::string &fname){
    ptree pt;
    read_xml(fname, pt);    // initialize ptree to the xml, i.e. SVG file
    auto root_node = pt.get_child("svg");   // necessary to get main node
    this->geo_objects = parse_geo_objects(root_node);
}

std::vector<SvgElem> SvgFile::parse_geo_objects(ptree tree){
    std::vector<SvgElem> v;
    for (auto &child: tree){
        if (this->parsable.find(child.first)!=this->parsable.end()){
            // this means we know how to parse the object
            SvgElem thisElem;
            thisElem.name = child.first.data();
            std::map<std::string, std::string> attributes;
            for (auto &atts : child.second.get_child("<xmlattr>")){
                attributes[atts.first.data()] = atts.second.data();
            }
            thisElem.attr = attributes;
            v.push_back(thisElem);
        } else if (child.first == "g") {
            auto tempvec = parse_geo_objects(child.second);
            v.insert(v.end(), tempvec.begin(), tempvec.end());
        }
    }
    return v;
}

/**
 * Function that iterately parses for ALL paths.
 * This seems to work well, and will be the basis of functions in the SvgFile
 * class (to be written).
 * @param  tree [description]
 * @return      [description]
 */
std::vector<SvgElem> path_return(ptree tree){
    std::vector<SvgElem> v;
    std::set<std::string> parsable = {"path"};
    for (auto &child: tree){
        if (parsable.find(child.first)!=parsable.end()){
            // this means we know how to parse the object
            SvgElem thisElem;
            thisElem.name = child.first.data();
            std::map<std::string, std::string> attributes;
            for (auto &atts : child.second.get_child("<xmlattr>")){
                attributes[atts.first.data()] = atts.second.data();
            }
            thisElem.attr = attributes;
            v.push_back(thisElem);
        } else if (child.first == "g") {
            auto tempvec = path_return(child.second);
            v.insert(v.end(), tempvec.begin(), tempvec.end());
        }
    }
    return v;
}

int main(int argc, char *argv[])
{
    if (argc != 2){
        std::cout << "usage: " << argv[0] << " <svg_file>\n";
    } else {
        std::cout << "Read XML file (" << argv[1] << ").\n";

        /* That part starting here until the next comment line needs to be in a
         * constructor for an SvgFile class, or at least in whatever function
         * to be written that calls the function path_return.
         */
        // ptree pt;
        // read_xml(argv[1], pt);
        // auto root_node = pt.get_child("svg");
        // /* End of the block above. */
        // auto all_paths = path_return(root_node);
        SvgFile myFile = SvgFile(argv[1]);
        auto all_paths = myFile.geo_objects;
        std::cout << "Found " << all_paths.size() << " paths in total.\n";
        for (auto& elem: all_paths){
            std::cout << "Element-type: " << elem.name << "\n";
            std::cout << "Attributes: " << elem.attr << "\n";
        }
    }

    return 0;
}
