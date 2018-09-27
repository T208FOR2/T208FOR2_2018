#include <iostream>
using namespace std;

int main() {
    int tictactoe[3][3];

    int k = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tictactoe[i][j] = k++;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << tictactoe[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
