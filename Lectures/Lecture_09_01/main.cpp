#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
    ifstream theinputfile;
    string s1,s2;

    theinputfile.open("test.txt");
    if (theinputfile.fail()) {
        cout << "aldjgfpioafjsd" << endl;
        exit(1);
    }

    getline(theinputfile, s1) >> s2;

    cout << s1 << endl;
    cout << s2 << endl;

    return 0;
}
