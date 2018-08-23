#include <iostream>

using namespace std;

int main()
{
    double sum = 0;

    for (int i = 1; i < 10; i++) {
        sum = sum + 1/i;
    }
    cout << sum << endl;

    return 0;
}
