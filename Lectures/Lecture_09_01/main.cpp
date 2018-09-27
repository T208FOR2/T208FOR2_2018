#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1,s2;

    cin >> s1 >> s2;

    if (s1 == s2) {
        cout << s1 << " and " << s2 << " are the same" << endl;
    }
    cout << s1 + s2 << endl;

    return 0;
}
