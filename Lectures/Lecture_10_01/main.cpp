#include <iostream>
#include <cctype>
#include <string>

using namespace std;

string toupper(string s);
string capitalize(string s);

int main()
{
    string s;
    getline(cin, s);

    cout << toupper(s) << endl;
    cout << capitalize(s) << endl;

    return 0;
}

string toupper(string s) {
    for (unsigned int i = 0; i < s.length(); i++) {
        s[i] = toupper(s[i]);
    }
    return s;
}

string capitalize(string s) {

}
