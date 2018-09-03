#include <iostream>

using namespace std;

int main()
{
    int laun;
    double tax_tennessee, tax_georgia, tax_something, tax_otherstate;
    cin >> laun;

    tax_tennessee = laun * 0.4;

    if (laun < 100000) {
        tax_georgia = laun * 0.35;
    }
    else {
        tax_georgia = 100000*0.35 + (laun - 100000) * 0.7;
    }


    return 0;
}
