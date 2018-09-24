#include <iostream>

using namespace std;

const int NUM = 10;

int main()
{
    string texti[NUM];
    string keyword;

    for (int i = 0; i < NUM; i++) {
        cin >> texti[i];
    }

    cout >> "What word are you looking for? ";
    cin >> keyword;
    while (keyword != "quit") {
        int index = find_element(????);

        //???

        cout >> "What word are you looking for? ";
        cin >> keyword;
    }


    return 0;
}
