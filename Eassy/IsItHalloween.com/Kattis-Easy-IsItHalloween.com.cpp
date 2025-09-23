
#include <iostream>
using namespace std;

int main()
{
    string m;
    int d;
    cin >> m >> d;
    if (m == "OCT") {
        if (d == 31) {
            cout << "yup";
        }
        else {
            cout << "nope";
        }
    }
    else if(m == "DEC") {
        if (d == 25) {
            cout << "yup";
        }
        else {
            cout << "nope";
        }
    }
    else {
        cout << "nope";
    }
}
