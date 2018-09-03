#include <iostream>

using namespace std;

double calculate_tax_tennessee(double salary);
double calculate_tax_georgia(double salary);


int main()
{
    double laun;
    double tax_tennessee, tax_georgia, tax_something, tax_otherstate;
    cin >> laun;

    //tax_tennessee = calculate_tax_tennessee(laun);
    tax_georgia = calculate_tax_georgia(laun);

    cout << tax_georgia << endl;

    return 0;
}


double calculate_tax_georgia(double salary) {
    if (salary < 0) {
        return 0;
    }
    if (salary < 100000) {
        return salary * 0.35;
    }
    else {
        return 100000*0.35 + (salary - 100000) * 0.7;
    }
}

double calculate_tax_tennessee(double salary) {
    double the_taxratio = 0.4;
    double thetax = salary * the_taxratio;
    return thetax;
}

