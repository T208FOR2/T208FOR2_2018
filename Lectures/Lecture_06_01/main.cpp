#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

void open_file(fstream& theinputfile, string thefilename);

int main()
{
    int tala, totalsum = 0, counter = 0;

    ifstream theinputfile;
    ofstream theoutputfile;



    while (theinputfile >> tala) {
        totalsum += tala;
        counter++;
    }
    theinputfile.close();


    theoutputfile.open("/Users/Eyjo/Desktop/nidurstada.txt");
    if (theoutputfile.fail()) {
        cout << "error!" << endl;
        exit(2);
    }

    theoutputfile << "The average is: " << static_cast<double>(totalsum) / counter << endl;

    theoutputfile.close();

    return 0;
}

void open_file(fstream& theinputfile, string thefilename) {
    theinputfile.open( thefilename.c_str() );

    if ( theinputfile.fail() ) {
        cout << "Can't open the file: " << thefilename << endl;
        exit(1);
    }
}

