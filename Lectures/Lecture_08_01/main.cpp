#include <iostream>

using namespace std;

const int NUM = 1000000;

int find_element( int s[], int thesize, int keyword );
int binary_search(int s[], int thesize, int keyword);

int main()
{
    int tolur[NUM];
    int keyword;

    for (int i = 0; i < NUM; i++) {
        tolur[i] = i;
    }

    cout << "What number are you looking for? ";
    cin >> keyword;
    while (keyword != -1) {
        //int index = find_element( tolur, NUM, keyword );
        int index = binary_search( tolur, NUM, keyword );

        if (index >= 0) {
            cout << "The number " << keyword << " is number ";
            cout << index + 1 << " in the list." << endl;
        }
        else {
            cout << "Sorry, can't find the number " << keyword << endl;
        }

        cout << "What number are you looking for? ";
        cin >> keyword;
    }

    return 0;
}


int binary_search(int s[], int thesize, int keyword) {
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

        cout << "Low: " << low << " - High: " << high << endl;
    }

    return -1;
}


int find_element( int s[], int thesize, int keyword ) {
    for (int i = 0; i < thesize; i++) {
        if (keyword == s[i]) {
            return i;
        }
        cout << "Position " << i << endl;
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


