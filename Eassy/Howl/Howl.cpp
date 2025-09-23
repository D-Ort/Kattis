
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    string fenrir, you;
    you = "AWHO";

    cin >> fenrir;
    n = fenrir.size() - 3;
    for (int i = 0; i < n; i++) {
        you += 'O';
    }

    cout << you << endl;
}