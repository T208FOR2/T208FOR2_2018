#include <iostream>

using namespace std;

const int NUM = 10;

void insertion_sort(int a[], int n);

int main()
{
    int tolur[NUM];

    for (int i = 0; i < NUM; i++) {
        cin >> tolur[i];
    }

    insertion_sort(tolur, NUM);

    for (int i = 0; i < NUM; i++) {
        cout << tolur[i] << " ";
    }
    cout << endl;

    return 0;
}

void insertion_sort(int a[], int n) {
    int tmp;

}





