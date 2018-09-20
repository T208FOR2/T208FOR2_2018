#include <iostream>

using namespace std;

int main()
{
    int tolur[5];

    for (int i = 0; i < 5; i++) {
        tolur[i] = i;
    }

    for (int i = 0; i < 5; i++) {
        cout << tolur[i] << " ";
    }
    cout << endl;

    return 0;
}
