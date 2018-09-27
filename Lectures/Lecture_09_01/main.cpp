#include <iostream>
using namespace std;

int main() {
    int t[100];
    char s[100] = "Hello world";

    for (int i = 0; i < 100; i++) {
        t[i] = 0;
    }

    cout << s << endl;
    cout << t << endl;

    return 0;
}
