#include <iostream>
#include <string>

using namespace std;

int main()
{
    int linur, dalkar;
    cin >> linur >> dalkar;

    int **p = new int*[linur];
    for (int i = 0; i < linur; i++) {
        p[i] = new int[dalkar];
    }

    for (int i = 0; i < linur; i++) {
        for (int j = 0; j < dalkar; j++) {
            cin >> p[i][j];
        }
    }

    for (int i = 0; i < linur; i++) {
        for (int j = 0; j < dalkar; j++) {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < linur; i++) {
        delete [] p[i];
    }
    delete [] p;

    return 0;
}

