
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    long int n, b, pos = 0, aux, count = 0, sub = 0;
    cin >> n >> b;

    vector <int> a;
    unordered_map<int, int> freq;
    freq[0] = 1;

    for (int i = 0; i < n; i++) {
        cin >> aux;

        if (aux > b) {
            a.push_back(1);
        }
        else if (aux < b) {
            a.push_back(-1);
        }
        else {
            a.push_back(0);
            pos = i;
        }
    }

    for (int i = 1; i <= pos; i++) {
        count += a[pos - i];
        freq[count]++;
    }

    count = 0;
    for (int i = pos; i < n; i++) {
        count += a[i];

        if (freq.count(-count)) {
            sub += freq[-count];
        }
    }
    cout << sub << endl;
}

