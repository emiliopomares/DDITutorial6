#include <iostream>

using namespace std;

bool locationMustHaveAsterisk(int i, int j, int size) {
	if(i==0) return true; // first row
	if(i==size-1) return true; // last row
	if(j==0) return true; // first column
	if(j==size-1) return true; // last column
	if(i==j) return true; // one diagonal
	if(i==(size-1-j)) return true; // the other diagonal
	return false; // if all else fails...
}

int main(int argc, char **argv) {

	int size;
	string line;

	cout << "Size of the checkbox, pleez: ";
	getline(cin, line);
	size = stoi(line);

	// the following code could/should be moved to  void printCheckBox_scientistStyle(int size) { ... }
	for(int i=0; i < size; ++i) {
		for(int j=0; j < size; ++j) {
			if(locationMustHaveAsterisk(i, j, size)) cout << "* ";
			else cout << "  ";
		}
		cout << "\n"; // end of row
	}
	
	cout << "\n\n There ya go... like a boss\n\n";

}
