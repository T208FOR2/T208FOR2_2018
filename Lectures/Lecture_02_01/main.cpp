#include <iostream>

using namespace std;

int main()
{
    int tala;
    cin >> tala;

    if ( tala % 2 == 0 ) {
        cout << tala << " is even" << endl;
    }
    else {
        cout << tala << " is odd" << endl;
    }

    return 0;
}
