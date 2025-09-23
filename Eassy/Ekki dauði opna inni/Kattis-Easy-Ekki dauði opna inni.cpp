
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string a,b;
    getline(cin, a);
    getline(cin, b);
    int i, j;

    i = a.find_first_of('|', 0);
    j = b.find_first_of('|', 0);

    for (int x = 0; x < i; x++) {
        cout << a[x];
    }
    for (int x = 0; x < j; x++) {
        cout << b[x];
    }
    cout << ' ';
    for (int x = i+1; x < a.length(); x++) {
        cout << a[x];
    }
    for (int x = j+1; x < b.length(); x++) {
        cout << b[x];
    }
}
