#include <iostream>

using namespace std;

const int NUM = 10;

int main()
{
    int tolur[NUM];

    for (int i = 0; i < NUM; i++) {
        cin >> tolur[i];
    }



    for (int i = 0; i < NUM; i++) {
        cout << tolur[i] << " ";
    }
    cout << endl;

    return 0;
}


