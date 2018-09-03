#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;

    if ( x++ < 42) {
        cout << x << endl;
        cout << "Hi!" << endl;
    }

    return 0;
}
