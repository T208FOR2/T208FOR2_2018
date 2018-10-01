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
    if (s.find(a) < s.length() ) {
        cout << "The word \"" << a << "\" starts at index " << s.find(a) << endl;
        cout << "and appears " << count_word(s,a) << " times." << endl;
    }
    else {
        cout << "Cannot find the word " << a << endl;
    }

    return 0;
}

int count_word(string s, string a) {
    int counter = 0;
    unsigned int pos = s.find(a);
    while ( pos < s.length() ) {
        counter++;
        pos = s.find(a, pos+1);
    }
    return counter;
}
