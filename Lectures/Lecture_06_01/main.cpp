#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    ifstream theinputfile;
    //theinputfile.open("randomtolur.txt");
    theinputfile.open("/Users/Eyjo/Desktop/randomtolur.txt");
    //theinputfile.open("c:\\Users\\Eyjo\\Desktop\\randomtolur.txt"); // <-- WINDOWS

    if ( theinputfile.fail() ) {
        cout << "Can't open the file!!!" << endl;
        exit(1);
    }

    // something clever!

    theinputfile.close();

    return 0;
}
