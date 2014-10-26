#include <fstream>
#include <ctime>
#include <string>

void get_time( std::string &tstring)
{
	std::time_t now = time(0);
	std::string dt( ctime(&now) );
        tstring = dt.substr(0, dt.length()-1);
}
 
void log( const std::string &text )
{
    std::string tstring;
    get_time(tstring);

    std::ofstream log_file(
        "log_file.txt", std::ios_base::out | std::ios_base::app );
    log_file << tstring  << ": " << text << std::endl;
}
