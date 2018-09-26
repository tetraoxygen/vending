#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>

// for convenience
using json = nlohmann::json;
using namespace std;

bool fexists(const char *filename) {
	std::ifstream ifile(filename);
	return (bool)ifile;
}

int main(){

	ifstream inFile; // Declares a FileStream variable for the vending machine's stock.

	// Checks if a stockkeeping file exists. The program would otherwise crash without explanation.
	if (fexists("../stock") == true){
		inFile.open("../stock"); // Opens the stockkeeping file. Will crash if you don't have a stockkeeping file in the same directory that this runs in, it will crash.
		json stock;
		inFile >> stock;
		cout << "© 2018 Tetraoxygen Software, Charlie Welsh" << endl;
		cout << stock.dump();
	}
	else{
		//Outputs that the stockkeeping file will not work.
		cout << "You don't have a stockkeeping file. Rectify this situation with the readme's guide to stockkeeping." << endl;
		abort();
	}



}

