#include <iostream>

using namespace std;

const int NUM = 10;

int find_element( string s[], int thesize, string keyword );

int main()
{
    string texti[NUM];
    string keyword;

    for (int i = 0; i < NUM; i++) {
        cin >> texti[i];
    }

    cout << "What word are you looking for? ";
    cin >> keyword;
    while (keyword != "quit") {
        int index = find_element( texti, NUM, keyword );

        if (index >= 0) {
            cout << "The word " << keyword << " is number ";
            cout << index + 1 << " in the list." << endl;
        }
        else {
            cout << "Sorry, can't find the word " << keyword << endl;
        }

        cout << "What word are you looking for? ";
        cin >> keyword;
    }

    return 0;
}


bin binary_search(string s[], int thesize, string keyword) {
    int low = 0, high = thesize - 1;
    int middle = (low+high) / 2;

    while (low < high) {
        if (s[middle] < keyword) {
            low = middle+1;
        }
        else if (s[middle] > keyword) {
            high = middle-1;
        }
        else {
            return middle;
        }
        middle = (low + high) / 2;
    }

    return -1;
}


int find_element( string s[], int thesize, string keyword ) {
    for (int i = 0; i < thesize; i++) {
        if (keyword == s[i]) {
            return i;
        }
    }
    return -1;
}

/*int find_element( string s[], int thesize, string keyword ) {
    int index = -1;
    for (int i = 0; i < thesize; i++) {
        if (keyword == s[i]) {
            index = i;
        }
    }
    return index;
}
*/







