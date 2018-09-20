#include <iostream>

using namespace std;

const int FJOLDI = 10;

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

    return 0;
}
