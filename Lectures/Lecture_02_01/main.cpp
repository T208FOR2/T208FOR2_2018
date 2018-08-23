#include <iostream>

using namespace std;

int main()
{
    string nafn;
    int aldur;

    cout << "Hi, what is your name? ";
    cin >> nafn;

    cout << "Welcome " << nafn << ", how old are you?";
    cin >> aldur;

    cout << "Hi " << nafn << ", you are " << aldur << " years old." << endl;


    return 0;
}
