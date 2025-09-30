
#include <iostream>
using namespace std;

int main()
{
	long int num, count;
	cin >> num;

	while (num != 0) {
		
		count = num;

		for (int i = 2; i * i <= num; ++i) {
			if (num % i == 0) {
				while (num % i == 0) num /= i;
				count -= count / i;
			}
		}
		if (num > 1) count -= count / num;

		cout << count << endl;
		cin >> num;
	}
}
