
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, a;
    vector <int> list;

    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> a;
        list.push_back(a);
    }
    for (int i = 1; i <= n;i++) {
        cout << list[n - i] << endl;
    } 
}
