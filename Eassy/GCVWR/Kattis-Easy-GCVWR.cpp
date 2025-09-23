
#include <iostream>
using namespace std;

int main()
{
	long int g, t, tot;
	int n, w;
	cin >> g >> t >> n;
	tot = g - t;
	tot *= 0.9;
	for (int i = 0; i < n; i++) {
		cin >> w;
		tot -= w;
	}
	cout << tot;
}
