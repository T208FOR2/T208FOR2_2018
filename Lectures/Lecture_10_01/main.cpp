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

    unsigned int pos1 = s.find_first_not_of("0123456789 :");
    unsigned int pos2 = s.find_first_of("0123456789",pos1+1);

    string name = s.substr(pos1,pos2 - pos1 - 1);

    cout << "Hi " << name << endl;

    return 0;
}

