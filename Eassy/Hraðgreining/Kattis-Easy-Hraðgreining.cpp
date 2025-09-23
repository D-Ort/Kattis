
#include <iostream>
using namespace std;

int main()
{
    string DNA;
    bool correct = false;
    cin >> DNA;
    for (int i = 0; i < DNA.length()-2; i++) {
        if (DNA[i] == 'C' && DNA[i + 1] == 'O' && DNA[i + 2] == 'V') {
            cout << "Veikur!";
            correct = true;
            i = DNA.length();
        }
    }
    if (!correct) {
        cout << "Ekki veikur!";
    }
}
