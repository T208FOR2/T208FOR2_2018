#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, keyword;

    getline(cin, s);
    cin >> keyword;

    cout << s << endl;
    cout << s.find(keyword) << endl;


    return 0;
}

