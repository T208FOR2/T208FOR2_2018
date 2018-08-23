#include <iostream>

using namespace std;

int main()
{
    int team = 0;

    for (int i = 0; i < 20; i++) {
        cout << "player " << i+1 << " in team " << (team % 4) + 1 << endl;
        team = team + 1;
    }



    return 0;
}
