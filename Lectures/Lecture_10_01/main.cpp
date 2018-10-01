#include <iostream>
#include <cctype>
#include <string>

using namespace std;

string replace_with_substr(string s, string a, string b);

int main()
{
    //Replace a with b in the sentence s
    string s;
    string a,b;
    getline(cin, s);
    cin >> a >> b;

    cout << replace_with_substr(s,a,b) << endl;

    return 0;
}

string replace_with_substr(string s, string a, string b) {
    unsigned int pos = s.find(a);
    while (pos < s.length()) {
        s = s.substr(0,pos) + b + s.substr(pos + a.length());
        pos = s.find(a, pos+1);
    }
    return s;
}

