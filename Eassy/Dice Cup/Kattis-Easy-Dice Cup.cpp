
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	if (a < b) {
		for (int i = a + 1; i < b + 2; i++) {
			cout << i << '\n';
		}
	}else {
		for (int i = b + 1; i < a + 2; i++) {
			cout << i << '\n';
		}
	}
}
