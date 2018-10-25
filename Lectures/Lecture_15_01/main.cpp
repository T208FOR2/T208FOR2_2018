#include <iostream>
#include <string>

using namespace std;

struct Dagsetning {
    int ar;
    int manudur;
    int dagur;
    string vikudagur;
};

void prenta_dagsetningu(Dagsetning d);

int main() {
    Dagsetning d;

    d.ar = 2018;
    d.manudur = 9;
    d.dagur = 17;
    d.vikudagur = "Friday";

    prenta_dagsetningu(d);
    cout << endl;

    return 0;
}

void prenta_dagsetningu(Dagsetning d) {
    cout << d.ar << "/" << d.manudur << "/" << d.dagur;
    cout << " (" << d.vikudagur << ")";
}




