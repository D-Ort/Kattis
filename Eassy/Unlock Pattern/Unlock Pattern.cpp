
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n[3][3];
    int p[9][2];
    int xa, ya, xb, yb;
    double sum = 0.0000000000;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> n[i][j];
            p[n[i][j] - 1][0] = i + 1;
            p[n[i][j] - 1][1] = j + 1;
        }
    }
    for (int i = 0; i < 8; i++) {

        xa = p[i][0];
        ya = p[i][1];
        xb = p[i + 1][0];
        yb = p[i + 1][1];



        if ((xa - xb) * (xa - xb) == 0) {
            if ((ya - yb) * (ya - yb) == 4) {
                sum++;
            }
            sum++;
        }
        else if ((xa - xb) * (xa - xb) == 1) {
            if ((ya - yb) * (ya - yb) == 0) {
                sum++;
            }
            else if ((ya - yb) * (ya - yb) == 1) {
                sum += sqrt(2);
            }
            else if ((ya - yb) * (ya - yb) == 4) {
                sum += sqrt(5);
            }
        }
        else if ((xa - xb) * (xa - xb) == 4) {

            if ((ya - yb) * (ya - yb) == 0) {
                sum += 2;
            }
            else if ((ya - yb) * (ya - yb) == 1) {
                sum += sqrt(5);
            }
            else if ((ya - yb) * (ya - yb) == 4) {
                sum += 2 * sqrt(2);
            }
        }
    }
    cout << setprecision(10);
    cout << sum << endl;
}
