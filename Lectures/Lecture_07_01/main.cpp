#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

void open_file(ifstream& inputfile, string filename);

int main()
{
    ifstream theinputfile;
    open_file(theinputfile, "/Users/Eyjo/Desktop/hr_bachelor.txt");



    theinputfile.close();
    return 0;
}

void open_file(ifstream& inputfile, string filename) {
    inputfile.open(filename.c_str());
    if (inputfile.fail()) {
        cout << "Can't open the file: " << filename << endl;
        exit(1);
    }
}
