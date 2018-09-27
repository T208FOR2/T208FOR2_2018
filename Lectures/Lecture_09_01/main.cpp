#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    getline(cin,s);

    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }
    cout << s << endl;

    for (int i = 0; i < s.length(); i++) {
        s[i] = toupper(s[i]);
    }
    cout << s << endl;

    return 0;
}
