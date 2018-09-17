#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    int tala, totalsum = 0, counter = 0;

    ifstream theinputfile;
    ofstream theoutputfile;

    //theinputfile.open("randomtolur.txt");
    theinputfile.open("/Users/Eyjo/Desktop/randomtolur.txt");
    //theinputfile.open("c:\\Users\\Eyjo\\Desktop\\randomtolur.txt"); // <-- WINDOWS

    if ( theinputfile.fail() ) {
        cout << "Can't open the file!!!" << endl;
        exit(1);
    }

    while (theinputfile >> tala) {
        totalsum += tala;
        counter++;
    }
    theinputfile.close();


    theoutputfile.open("nidurstada.txt");
    if (theoutputfile.fail()) {
        cout << "error!" << endl;
        exit(2);
    }

    theoutputfile << "The average is: " << static_cast<double>(totalsum) / counter << endl;

    theoutputfile.close();

    return 0;
}
