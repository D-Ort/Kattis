
#include <iostream>
#include <map>
using namespace std;

int main()
{
    int y, x;
    long int aux;
    map <pair<int, int>, long int> f;
    cin >> y >> x;
    bool jebb = false;

    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            cin >> aux;
            f.insert({ {i,j}, aux });
        }
    }

    for (int i = 1; i < y - 1; i++) {
        for (int j = 1; j < x - 1; j++) {
            aux = f[{i, j}];
            
            if (f[{i - 1, j}] > aux && f[{i + 1, j}] > aux && f[{i, j - 1}] > aux && f[{i, j + 1}] > aux) {
                jebb = true;
            }
        }
    }
    if (jebb) {
        cout << "Jebb" << endl;
    }
    else {
        cout << "Neibb" << endl;
    }
}
