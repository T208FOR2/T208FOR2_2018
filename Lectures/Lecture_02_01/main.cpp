#include <iostream>

using namespace std;

int main()
{
    const int ITERATIONS = 20;
    int x;
    cin >> x;

    while (x <= ITERATIONS) {
        cout << x << endl;
        x++;
        ITERATIONS++;
    }

    return 0;
}
