#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

void open_file(ifstream& theinputfile, string thefilename);

int main()
{
    char c;
    ifstream theinputfile;
    open_file(theinputfile, "/Users/Eyjo/Desktop/grimm.txt");

    while ( !theinputfile.eof() ) {
        theinputfile.get(c);
        cout << c;
    }
    cout << endl;

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

