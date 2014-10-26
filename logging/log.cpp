#include <fstream>
#include <ctime>
#include <string>
 
void log( const std::string &text )
{
	// Get the time stamp
	std::time_t now = time(0);
	std::string dt( ctime(&now) );
	
	//sTime << t.substr( 0, t.length() -1  );
    std::ofstream log_file(
        "log_file.txt", std::ios_base::out | std::ios_base::app );
    log_file << dt.substr(0, dt.length()-1) 
				<< ": " << text << std::endl;
}
