#include <iostream>
using namespace std;

const int FJOLDI = 24;

void prenta_fylki(int a[], int n);
void snua_vid_fylki(int tolur[], int n);

int main()
{
    int tolur[FJOLDI];
    int tmp;

    for (int i = 0; i < FJOLDI; i++) {
        tolur[i] = i;
    }

    prenta_fylki(tolur, FJOLDI);

    snua_vid_fylki(tolur, FJOLDI);

    prenta_fylki(tolur, FJOLDI);


    return 0;
}

void snua_vid_fylki(tolur[], int n) {
    for (int i = 0; i < n/2; i++) {
        tmp = tolur[i];
        tolur[i] = tolur[n-i-1];
        tolur[n-i-1] = tmp;
    }
}

void prenta_fylki(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
