#include <iostream>

using namespace std;

const int FJOLDI = 5;

int main()
{
    int tolur[FJOLDI];

    for (int i = 0; i < FJOLDI; i++) {
        tolur[i] = i;
    }

    for (int i = 0; i < FJOLDI; i++) {
        cout << tolur[i] << " ";
    }
    cout << endl;

    cout << tolur[1098234] << endl;

    return 0;
}
