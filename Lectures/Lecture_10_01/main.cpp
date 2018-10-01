#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int count_word(string s, string a);

int main()
{
    string s,a;
    getline(cin, s);
    cin >> a;

    cout << "01234567890123456789012345678901234567890" << endl;
    cout << s << endl;
    cout << "find:         " << s.find(a) << endl;
    cout << "find_first_of:" << s.find_first_of(a) << endl;

    return 0;
}

