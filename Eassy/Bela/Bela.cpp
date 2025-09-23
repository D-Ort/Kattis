
#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int n, sum = 0;
    char a;
    string b;
    cin >> n >> a;

    for (int i = 0; i < 4 * n; i++) {
        cin >> b;
        if (b[0] == 'J') {
            if (b[1] == a) {
                sum += 20;
            }
            else {
                sum += 2;
            }
        }
        else if (b[0] == '9') {
            if (b[1] == a) {
                sum += 14;
            }
        }
        else if (b[0] == 'T') {
            sum += 10;
        }
        else if (b[0] == 'Q') {
            sum += 3;
        }
        else if (b[0] == 'K') {
            sum += 4;
        }
        else if (b[0] == 'A') {
            sum += 11;
        }
    }
    cout << sum;
}
