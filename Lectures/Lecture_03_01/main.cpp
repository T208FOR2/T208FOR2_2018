#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;

    if (100.0 / x > 10) {
        cout << "Hi" << endl;
    }
    else {
        cout << "Something else..." << endl;
    }
    cout << x << endl;


    return 0;
}
