
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long int n;
    string num = "";

    cin >> n;

    while (n != 0) {
        if (n % 2 != 0) {
            num += '1';
        }
        else {
            num += '0';
        }
        n /= 2;
    }

    for (int i = 0; i < num.length(); i++) {
        if (num[num.length() - i - 1] == '1') {
            n += pow(2, i);
        }
    }



    /*
    while (n != 0) {
        num *= 10;
        if (n % 2 != 0) {
            num += 1;
        }
        n /= 2;
    }
    n = 0;

    for (int i = 0; num != 0; i++) {
        if (num % 10 != 0) {
            n += pow(2, i);
        }
        num /= 10;
    }
    */
    cout << n;
}
