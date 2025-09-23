

#include <iostream>
using namespace std;

int main()
{
	long int N, P, rest;

	cin >> N >> P;

	if (N < P) {

		rest = P - N;
		cout << "Dr. Chaz will have " << rest << " piece";
		if (rest > 1) {
			cout << "s";
		}
		cout << " of chicken left over!";
	}
	else {

		rest = N - P;
		cout << "Dr. Chaz needs " << rest << " more piece";
		if (rest > 1) {
			cout << "s";
		}
		cout << " of chicken!";
	}
}
