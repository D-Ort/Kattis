
#include <iostream>
using namespace std;

int main()
{
    string name;
    long int years;

    cin >> name >> years;

    for (int i = 0; i < years; i++) {
        cout << "Hipp hipp hurra, " << name << "!" << endl;
    }
}
