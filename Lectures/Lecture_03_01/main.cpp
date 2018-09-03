#include <iostream>

using namespace std;

double calculate_tax_tennessee(double salary);

int main()
{
    double laun;
    double tax_tennessee, tax_georgia, tax_something, tax_otherstate;
    cin >> laun;

    tax_tennessee = calculate_tax_tennessee(laun);

    if (laun < 100000) {
        tax_georgia = laun * 0.35;
    }
    else {
        tax_georgia = 100000*0.35 + (laun - 100000) * 0.7;
    }


    return 0;
}
