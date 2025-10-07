
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x, y;
    cin >> y >> x;
    char a;
    vector <pair <int, int>> c;

    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            cin >> a;
            if (a == '*')
                c.push_back({ i,j });
        }
    }
    cout << c.size() << endl;
    for (int i = 0; i < c.size(); i++) {
        cout << c[i].first + 1 << ' ' << c[i].second + 1 << endl;
    }
}
