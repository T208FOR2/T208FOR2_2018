#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

void open_file(ifstream& inputfile, string filename);

int main()
{
    ifstream theinputfile;
    string deild;
    string inntak_deild;
    int ar,kk,kvk;

    open_file(theinputfile, "/Users/Eyjo/Desktop/hr_bachelor.txt");

    cout << "Please write a name of a department: ";
    cin >> deild;

    while (theinputfile >> inntak_deild && theinputfile >> ar &&
           theinputfile >> kk && theinputfile >> kvk) {
        cout << inntak_deild << " " << ar << " " << kk << " " << kvk << endl;
    }



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
