#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
    char s1[100] = "2134";
    string s2 = "2134";

    cout << atoi(s1) << endl;
    cout << atoi(s2.c_str()) << endl;


    return 0;
}
