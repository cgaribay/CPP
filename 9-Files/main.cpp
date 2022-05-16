#include <cstdlib>  // for the fail member function
#include <fstream>  // for file I/O definitions
#include <iostream> // for cout definition
#include <string>
using namespace std;

int main() {
	ifstream in_stream;
    ofstream out_stream;
    // Try changing this to realFile.txt
	in_stream.open("realFile.txt");
	if (in_stream.fail()) {
		cout << "Sorry, the file couldn't be opened!\n";
		exit(1); // This exit value indicates an error happened (usual exit
				 // value is 0)
	}
    out_stream.open("outFile.txt");
	if (out_stream.fail()) {
		cout << "Sorry, the file couldn't be opened!\n";
		exit(1); // This exit value indicates an error happened (usual exit
				 // value is 0)
	}
    string input {};
    while (in_stream >> input) {
        cout << input << endl;
        out_stream << input << endl;
    }

    in_stream.close();
    out_stream.close();
    return 0;
}