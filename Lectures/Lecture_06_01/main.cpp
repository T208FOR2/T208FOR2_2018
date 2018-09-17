#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    int tala, totalsum = 0, counter = 0;

    ifstream theinputfile;
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

    return 0;
}
