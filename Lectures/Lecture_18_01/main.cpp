#include <iostream>
#include "Numbers.h"

using namespace std;

void printArray(Numbers num) {
    cout << "[" << num << "]" << endl;
}

int main() {
    Numbers n,m;
    for (int i = 0; i < 20; i++) {
        n.append(i);
    }
    cout << n << endl;
    cout << "---------------------" << endl;
    printArray(n);
    cout << "---------------------" << endl;
    for (int i = 0; i < 10; i++) {
        m.append(i*i);
    }
    cout << m << endl;
    n = m;
    cout << n << endl;

    return 0;
}
