#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int t[100];
    char s[100] = "Hello world";
    char s2[100] = "Hello world";

    for (int i = 0; i < 100; i++) {
        t[i] = 0;
    }

    cout << s << endl;
    cout << t << endl;

    if (strcmp(s,s2) == 0) {
        cout << "The strings are the same" << endl;
    }

    return 0;
}
