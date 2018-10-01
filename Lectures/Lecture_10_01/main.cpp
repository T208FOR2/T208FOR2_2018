#include <iostream>
#include <cctype>
#include <string>

using namespace std;

string toupper(string s);
string capitalize(string s);

int main()
{
    string s,a;
    getline(cin, s);
    cin >> a;

    cout << "01234567890123456789012345678901234567890" << endl;
    cout << s << endl;
    if (s.find(a) < s.length() ) {
        cout << "The word " << a << " starts at index " << s.find(a) << endl;
    }
    else {
        cout << "Cannot find the word " << a << endl;
    }

    return 0;
}

