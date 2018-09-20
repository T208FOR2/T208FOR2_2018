#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

void open_file(ifstream& inputfile, string filename);

int main()
{

    return 0;
}

void open_file(ifstream& inputfile, string filename) {
    inputfile.open(filename.c_str());
    if (inputfile.fail()) {
        cout << "Can't open the file: " << filename << endl;
        exit(1);
    }
}
