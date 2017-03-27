#include <iostream>
#include <string>
#include <rapidxml.hpp>
#include <rapidxml_utils.hpp> // this is necessary as it gives us the file function
using namespace rapidxml;

int main()
{
    // stuff to load the SVG as an XML document
    rapidxml::file<> svgSourceFile("lymph.svg");
    rapidxml::xml_document<> doc;
    doc.parse<0>(svgSourceFile.data());

    std::cout << "Successfully loaded SVG.\n";
    std::string data, nodeName; // some strings to hold data

    // this will hold the root note; that's the outer-most <svg> tag
    auto rootNote = doc.first_node();
    std::cout << "First node is " << rootNote->name() << std::endl;

    // iterate over the children of the root node; this only goes one level deep
    for (auto pNode = rootNote->first_node(); pNode; pNode = pNode->next_sibling()){
        nodeName = pNode->name();
        if (nodeName == "path"){ // if the current node is a path node
            std::cout << "Found path. Get data info.\n";
            data = pNode->first_attribute("d")->value();
            std::cout << "\tValue: d='" << data << "'.\n";

            // this evaluates as true only if the "stroke-width" attribute is
            // present in the current node. Otherwise, this block gets skipped.
            // This technique may be very useful to run over optional attributes.
            // This or a switch when iterating over *all* attributes of a node.
            if (pNode->first_attribute("stroke-width")){
                std::cout << "Node has stroke-width="
                    << pNode->first_attribute("stroke-width")->value()
                    << ".\n";
            }
        }
    }


    return 0;
}
