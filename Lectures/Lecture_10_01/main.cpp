#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int count_word(string s, string a);

int main()
{
    string s;
    getline(cin, s);
    // First we have a name and then a number

    unsigned int pos = s.find_first_of("0123456789");

    string name = s.substr(0,pos-1);

    cout << "Hi " << name << endl;

    return 0;
}

