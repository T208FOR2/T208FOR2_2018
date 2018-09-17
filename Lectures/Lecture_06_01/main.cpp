#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

void open_file(ifstream& theinputfile, string thefilename);
void open_file(ofstream& theoutputfile, string thefilename);

int main()
{
    int tala, totalsum = 0, counter = 0;

    ifstream theinputfile;
    ofstream theoutputfile;

    open_file(theinputfile, "/Users/Eyjo/Desktop/randomtolur.txt");
    open_file(theoutputfile, "/Users/Eyjo/Desktop/nidurstada.txt");

    while (theinputfile >> tala) {
        totalsum += tala;
        counter++;
    }
    theinputfile.close();

    theoutputfile << "The average is: " << static_cast<double>(totalsum) / counter << endl;

    theoutputfile.close();

    return 0;
}

void open_file(ifstream& theinputfile, string thefilename) {
    theinputfile.open( thefilename.c_str() );

    if ( theinputfile.fail() ) {
        cout << "Can't open the file: " << thefilename << endl;
        exit(1);
    }
}

void open_file(ofstream& theoutputfile, string thefilename) {
    theoutputfile.open( thefilename.c_str() );

    if ( theoutputfile.fail() ) {
        cout << "Can't open the file: " << thefilename << endl;
        exit(1);
    }
}
