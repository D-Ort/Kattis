
#include <iostream>
using namespace std;

int main()
{
    int n;
    long long sum = 0, aux;
    string s;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s >> aux;
        sum += aux;
    }

    if (sum > 0) {
        cout << "Usch, vinst" << endl;
    }
    else if (sum < 0) {
        cout << "Nekad" << endl;
    }
    else {
        cout << "Lagom" << endl;
    }
}
