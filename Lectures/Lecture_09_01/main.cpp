#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string tolower(string s);

int main() {
    string s;
    getline(cin,s);

    cout << tolower(s) << endl;
    cout << s << endl;

    for (int i = 0; i < s.length(); i++) {
        s[i] = toupper(s[i]);
    }
    cout << s << endl;

    return 0;
}

string tolower(string s) {
    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }
    return s;
}
