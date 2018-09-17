#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    int tala;
    ifstream theinputfile;
    //theinputfile.open("randomtolur.txt");
    theinputfile.open("/Users/Eyjo/Desktop/randomtolur2.txt");
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
