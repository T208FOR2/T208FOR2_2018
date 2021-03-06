#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

void open_file(ifstream& inputfile, string filename);

int main()
{
    ifstream theinputfile;
    string deild, tmp;
    string inntak_deild;
    int ar,kk,kvk;
    bool found_department = false;

    open_file(theinputfile, "/Users/Eyjo/Desktop/hr_bachelor.txt");

    cout << "Please write a name of a department: ";
    cin >> deild;

    for (int i = 0; i < 4; i++) {
        theinputfile >> tmp;
    }

    while (theinputfile >> inntak_deild && theinputfile >> ar &&
           theinputfile >> kk && theinputfile >> kvk) {
        if (inntak_deild == deild) {
            cout << ar << ": " << kk + kvk << endl;
            found_department = true;
        }
    }

    if ( !found_department ) {
        cout << "Sorry, I can't find the department " << deild << endl;
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
