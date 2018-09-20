#include <iostream>

using namespace std;

const int FJOLDI = 5;

int main()
{
    int tolur[FJOLDI];

    for (int i = 0; i < FJOLDI; i++) {
        tolur[i] = i;
    }

    tolur[143453242] = 42;

    for (int i = 0; i < FJOLDI; i++) {
        cout << tolur[i] << " ";
    }
    cout << endl;

    return 0;
}
