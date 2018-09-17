#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    int tala;
    ifstream theinputfile;
    //theinputfile.open("randomtolur.txt");
    theinputfile.open("/Users/Eyjo/Desktop/randomtolur.txt");
    //theinputfile.open("c:\\Users\\Eyjo\\Desktop\\randomtolur.txt"); // <-- WINDOWS

    if ( theinputfile.fail() ) {
        cout << "Can't open the file!!!" << endl;
        exit(1);
    }

    for (int i = 0; i < 5; i++) {
        theinputfile >> tala;
        cout << tala << endl;
    }

    theinputfile.close();

    return 0;
}
