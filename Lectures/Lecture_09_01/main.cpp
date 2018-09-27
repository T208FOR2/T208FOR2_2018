#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, keyword;

    getline(cin, s);
    cin >> keyword;

    cout << "0123456789012345678901234567890" << endl;
    cout << s << endl;

    if (s.find(keyword) > s.length() ) {
        cout << "Can't find " << keyword << endl;
    }
    else {
        cout << "the index of " << keyword << " is " << s.find(keyword) << endl;
    }


    return 0;
}

