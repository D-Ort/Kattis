// recibe un string y devuelve el string a partir del primer 'a';

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int x,y;
	string a;
	cin >> a;
	x = a.find('a');
	y = a.length();
	for (int i = x; i < y; i++) {
		cout << a[i];
	}
}
