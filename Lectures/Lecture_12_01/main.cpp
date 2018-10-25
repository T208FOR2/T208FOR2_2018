#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

const int NUM = 1000;

void open_file(ifstream &thefile, string thefilename);
int read_file_contents(ifstream &thefile, string w[]);
bool words_are_unique(string w[], int k);

int main()
{
    ifstream thefile;
    string thefilename;
    string w[NUM];

    cin >> thefilename;
    open_file(thefile, thefilename);

    int n = read_file_contents(thefile, w);
    thefile.close();

    if ( words_are_unique(w,n) ) {
        cout << "Unique words." << endl;
    }
    else {
        cout << "Some words appear more than once." << endl;
    }

    return 0;
}

bool words_are_unique(string w[], int k) {
    bool uniquewords = true;
    for (int i = 0; i < k; i++) {
        for (int j = i+1; j < k; j++) {
            if (w[i] == w[j]) {
                uniquewords = false;
            }
        }
    }
    return uniquewords;
}


int read_file_contents(ifstream &thefile, string w[]) {
    int k = 0;
    while (thefile >> w[k]) {
        k++;
    }
    return k;
}

void open_file(ifstream &thefile, string thefilename) {
    thefile.open(thefilename.c_str());
    if (thefile.fail()) {
        cout << "Can't open the file: " << thefilename << endl;
        exit(1);
    }
}
