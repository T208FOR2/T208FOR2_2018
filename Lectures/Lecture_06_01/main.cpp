#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

void open_file(ifstream& theinputfile, string thefilename);

int main()
{
    string nafn,nafn_staerst;
    int nr, a,b,c;
    int staerst = 0;
    ifstream theinputfile;
    open_file(theinputfile, "/Users/Eyjo/Desktop/test2.txt");

    while ( theinputfile >> nr && theinputfile >> nafn && theinputfile >> a && theinputfile >> b && theinputfile >> c ) {
        if (a + b + c > staerst) {
            staerst = a+b+c;
            nafn_staerst = nafn;
        }
    }
    cout << "The largest sum was " << staerst << " and belongs to " << nafn_staerst << endl;

    theinputfile.close();
    return 0;
}


void open_file(ifstream& theinputfile, string thefilename) {
    theinputfile.open( thefilename.c_str() );

    if ( theinputfile.fail() ) {
        cout << "Can't open the file: " << thefilename << endl;
        exit(1);
    }
}

