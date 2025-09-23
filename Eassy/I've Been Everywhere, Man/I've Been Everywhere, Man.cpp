
#include <iostream>
#include <set>

using namespace std;
int main()
{
    int t;
    int n;

    string a;
    cin >> t;


    for (int i = 0; i < t; i++) {
        cin >> n;
        set <string> places;
        for (int j = 0; j < n; j++) {
            cin >> a;
            places.insert(a);
        }
        cout << places.size() << endl;
    }
}
