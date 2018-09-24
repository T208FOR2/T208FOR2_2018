#include <iostream>

using namespace std;


int main()
{
    int n;
    cin >> n;

    int tolur[ n ];
    for (int i = 0; i < n; i++) {
        cin >> tolur[i];
    }

    for (int i = n-1; i >= 0; i--) {
        cout << tolur[i] << " ";
    }
    cout << endl;

    return 0;
}
