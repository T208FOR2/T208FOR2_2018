#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, keyword;

    getline(cin, s);
    cin >> keyword;

    cout << "0123456789012345678901234567890" << endl;
    cout << s << endl;
    cout << s.find(keyword) << endl;


    return 0;
}

