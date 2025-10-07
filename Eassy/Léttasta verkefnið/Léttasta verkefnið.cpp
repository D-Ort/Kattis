
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int p, t, aux;
    string s;
    vector <string> names;
    vector <int> points;

    cin >> p >> t;

    for (int i = 0; i < p; i++) {
        cin >> s;
        names.push_back(s);
        points.push_back(0);
    }
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < p; j++) {
            cin >> aux;
            points[j] += aux;
        }
    }
    aux = 0;
    for (int i = 0; i < p; i++) {
        if (points[i] > aux) {
            aux = points[i];
            s = names[i];
        }
    }
    cout << s << endl;
}
