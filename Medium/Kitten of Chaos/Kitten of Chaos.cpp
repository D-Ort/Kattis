
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string s, t;
	bool h = false, v = false;
	cin >> s >> t;

	for (int i = 0; i < t.size(); i++) {

		if (t[i] == 'h')
			h = !h;
		else if (t[i] == 'v')
			v = !v;
		else {
			h = !h;
			v = !v;
		}
	}
	if (h) {
		reverse(s.begin(), s.end());
	}

	for (int j = s.size() - 1; j >=0; j--) {
		if (h) {
			if (s[j] == 'b')
				s[j] = 'd';
			else if (s[j] == 'd')
				s[j] = 'b';
			else if (s[j] == 'p')
				s[j] = 'q';
			else if (s[j] == 'q')
				s[j] = 'p';
		}
		if (v) {
			if (s[j] == 'b')
				s[j] = 'p';
			else if (s[j] == 'd')
				s[j] = 'q';
			else if (s[j] == 'p')
				s[j] = 'b';
			else if (s[j] == 'q')
				s[j] = 'd';
		}
	}
	
	cout << s << endl;
}
