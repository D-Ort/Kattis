
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    string txt;
    bool a = false;

    for (int i = 0; i < 5; i++) {
        cin >> txt;
        for (int j = 2; j < txt.size(); j++) {
            if (txt[j] == 'I') {
                if (txt[j - 1] == 'B') {
                    if (txt[j - 2] == 'F') {
                        cout << i + 1 << ' ';
                        a = true;
                    }
                }
            }
        }
    }
    if (!a) {
        cout << "HE GOT AWAY!";
    }
}