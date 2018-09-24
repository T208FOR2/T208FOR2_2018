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
        int index = find_element(????);

        if (index >= 0) {
            cout << "The word " << keyword << " is number";
            cout << index << " in the list." << endl;
        }
        else {
            cout << "Sorry, can't find the word " << keyword << endl;
        }

        cout << "What word are you looking for? ";
        cin >> keyword;
    }

    return 0;
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







