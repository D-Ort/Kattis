
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string f;
    getline(cin, f);
    if (f.find(":(") == -1) {
        if (f.find(":)") == -1) {
            cout << "machine";
        }else{
            cout << "alive";
        }
    }
    else if (f.find(":)") == -1) {
        cout << "undead";
    }
    else {
        cout << "double agent";
    }
}
