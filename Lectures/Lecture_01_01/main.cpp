#include <iostream>
#include <string>

using namespace std;

int main()
{
    int tala = 0;
    bool user_wrote_42 = false;

    while ( tala != -1 ) {
        cout << "Write a number: ";
        cin >> tala;

        if ( tala == 42 ) {
            user_wrote_42 = true;
        }
    }

    if ( user_wrote_42 ) {
        cout << "You wrote 42!!!" << endl;
    }
    else {
        cout << "You forgot to write 42..." << endl;
    }

    return 0;
}
