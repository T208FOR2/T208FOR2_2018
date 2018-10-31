#ifndef NUMBERS_H
#define NUMBERS_H

#include <iostream>
using namespace std;

class Numbers {
public:
    Numbers();
    ~Numbers();

    Numbers( const Numbers& cloneme );  // Copy constructor
    void operator = (const Numbers &sameasme);  // Assignment operator

    void append(int i);

    friend ostream& operator << (ostream& outs, const Numbers& num);

private:
    int *p;
    int n;
    int max_elements;

    void double_size_of_array();
};

#endif // NUMBERS_H
