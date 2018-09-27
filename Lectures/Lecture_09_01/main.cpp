#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    s[10] = 'X';

    cout << s << endl;

    return 0;
}
