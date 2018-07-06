/*

	Github updater using system commands :D

	@author Mo. Abdelaaty

	For usuage questions, leave me an email at mohamed.abdelaaty@alumni.ubc.ca

*/

#include <iostream>
#include <fstream>
#include <Windows.h>

using namespace std;

int main(void) {

	while (true) {
		std::ofstream file;
		file.open("update.txt", std::ofstream::out | std::ofstream::app);
		file << ".";
		file.close();
		system("git add update.txt");
		Sleep(500);
		system("git commit -m \"file update\"");
		Sleep(500);
		system("git push -u origin master");
		Sleep(10000);
	}
}	
