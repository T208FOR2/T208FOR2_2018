#include <iostream>
using namespace std;

double tax_alabama(double salary);
double tax_georgia(double salary);
double tax_tennessee(double salary);

int main() {
    double salary;
    double lowest_tax = 10000.0;
    string best_state = "";

    cin >> salary;

    cout << "Alabama: " << tax_alabama(salary) << endl;
    cout << "Georgia: " << tax_georgia(salary) << endl;
    cout << "Tennessee: " << tax_tennessee(salary) << endl;

    if (tax_alabama(salary) < lowest_tax) {
        lowest_tax = tax_alabama(salary);
        best_state = "Alabama";
    }
    if (tax_georgia(salary) < lowest_tax) {
        lowest_tax = tax_georgia(salary);
        best_state = "Georgia";
    }
    if (tax_tennessee(salary) < lowest_tax) {
        lowest_tax = tax_tennessee(salary);
        best_state = "Tennessee";
    }

    cout << "Best state: " << best_state << endl;

    return 0;
}

double tax_alabama(double salary) {
    return 0.26 * salary;
}

double tax_georgia(double salary) {
    if (salary < 1000) {
        return 0.05 * salary;
    }
    else {
        return 0.05 * 1000 + 0.3* (salary - 1000);
    }
}

double tax_tennessee(double salary) {
    double tax = 0.0, tax_ratio = 0.1;
    while (salary > 1000) {
        tax = tax + tax_ratio * 1000;
        salary = salary - 1000;
        tax_ratio = tax_ratio + 0.1;
    }
    tax = tax + tax_ratio * salary;
    return tax;
}


