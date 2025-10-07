
#include <iostream>
using namespace std;

int main()
{
    int count = 1;
    string a, b;
    cin >> a >> b;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            count++;
        }
    }
    cout << count << endl;
}
