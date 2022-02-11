#include "httpReq.h"

//map for encoding html page names
std::unordered_map<std::string, unsigned short> codes = {
	{"index.html", 1}, {"test.html", 2}
};

//create a series of functions that handles different routes
//framework will assume that all html files are in the 'templates' directory
//if there are any subdirectories, the user must specify
std::string web::app::mainLogic(const std::string &method, const std::string &file, const Map &form) const { 
	unsigned short page = 0;
	page = codes[file];

	//return html pages based on codes map
	switch(page) {
		case 1: 
			return "index.html";
		case 2:
			return "test.html";

		default:
			return "404.html";
	}
}

//create or import functions for the routes here


//main function to run the server
int main(void)
{
	//web application object
	web::app App;
	App.run();
}
