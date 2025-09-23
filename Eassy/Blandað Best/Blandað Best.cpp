
#include <iostream>
using namespace std;

int main()
{
	int n;
	string a;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
	}

	if (n == 2) {
		cout << "blandad best" << endl;
	}
	else if (a == "kjuklingur") {
		cout << "kjuklingur" << endl;
	}
	else {
		cout << "nautakjot" << endl;
	}
}