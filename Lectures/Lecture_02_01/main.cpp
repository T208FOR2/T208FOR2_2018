#include <iostream>

using namespace std;

int main()
{
    const int ITERATIONS = 20;
    const string ERRORMESSAGE = "whoops!!!";
    int x;
    cin >> x;

    if (x > ITERATIONS) {
        cout << ERRORMESSAGE << endl;
    }

    while (x <= ITERATIONS) {
        cout << x << endl;
        x++;
    }

    return 0;
}
