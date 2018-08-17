#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nafn;
    int aldur = 0;

    cout << "What's your name: ";
    cin >> nafn;

    cout << "How old are you? ";
    cin >> aldur;

    cout << "Hi " << nafn << ", welcome to T208FOR2!" << endl;

    cout << aldur << endl;

    if (aldur >= 30 && nafn == "Eyjo") {
        cout << "HI!!!" << endl;
    }
    else if (aldur >= 20) {
        cout << "Would you like a beer?" << endl;
    }
    else {
        cout << "Would you like an ice-cream?" << endl;
    }

    return 0;
}
