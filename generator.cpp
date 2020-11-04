#include<iostream>
#include<string>
#include<fstream>
using namespace std;
#define Homework "/home/debian/TurgeonHW7-4"

int main(){
	fstream fs;
	string HTMLfilepath = "/generated.html";
	string HTMLfile = Homework + HTMLfilepath;
	fs.open((HTMLfile).c_str(), fstream::out);

	fs << "<html><title>My Web Page</title>" << endl;
   	fs << "<body><h1>CPE 422 Web Page</h1>" << endl;
   	fs << "My first HTML web page." << endl;
   	fs << "<h2>Testing BeagleBone using CGI scripts</h2>" << endl;
   	fs << "<ol>" << endl;
   	fs << "<li>Linux</li>" << endl;
   	fs << "<li>Web Servers</li>" << endl;
   	fs << "</ol>" << endl;
   	fs << "</body></html>" << endl;

   	fs.close();
}
