
#include <iostream>
using namespace std;

int main()
{
    int n, aux, max = 0;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> aux >> s;
        if (s == "nej") {
            if (aux > max) {
                max = aux;
            }
        }
    }
    cout << max << endl;
}
