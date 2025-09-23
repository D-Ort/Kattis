
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string line;
    int n;
    getline(cin, line);
    n = line.length();
    if ((n % 2) == 0) {
        if (line[n / 2] == ')') {
            cout << "correct";
        }
        else {
            cout << "fix";
        }
    }
    else {
        cout << "fix";
    }
}
