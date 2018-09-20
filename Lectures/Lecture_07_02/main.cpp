#include <iostream>
using namespace std;

const int FJOLDI = 24;

void prenta_fylki(int a[], int n);

int main()
{
    int tolur[FJOLDI];

    for (int i = 0; i < FJOLDI; i++) {
        tolur[i] = i;
    }

    prenta_fylki(tolur, FJOLDI);

    for (int i = 0; i < FJOLDI; i++) {
        tolur[i] = tolur[FJOLDI-i-1];
    }

    prenta_fylki(tolur, FJOLDI);


    return 0;
}

void prenta_fylki(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
