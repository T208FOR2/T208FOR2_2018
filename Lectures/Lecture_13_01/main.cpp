#include <iostream>

using namespace std;

int main()
{
    int n;
    int *p, *q;

    cin >> n;

    p = new int[n];
    for (int i = 0; i < n; i++) {
        p[i] = i;
    }

    q = p;
    for (int i = 0; i < n; i++) {
        cout << *q << " ";
        q++;
    }

    cout << endl;

    cout << p << endl;
    cout << q << endl;

    delete [] p;

    return 0;
}
