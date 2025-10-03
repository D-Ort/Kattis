
#include <iostream>
using namespace std;

int main()
{
    int n;
    char a;
    string s;
    bool find = false;

    cin >> n >> a >> s;

    for (int i = 0; i < n; i++) {
        if (s[i] == a)
            find = true;
    }

    if (find) {
        cout << "Unnar fann hana!" << endl;
    }
    else {
        cout << "Unnar fann hana ekki!" << endl;
    }
}
