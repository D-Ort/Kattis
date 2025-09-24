
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string line;
    int n, count1 = 0, count2 = 0;
    getline(cin, line);
    n = line.length();

    for (int i = 0; i < n; i++) {
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u' || line[i] == 'A' || line[i] == 'E' || line[i] == 'I' || line[i] == 'O' || line[i] == 'U') {
            count1++;
            count2++;
        }
        else if (line[i] == 'y' || line[i] == 'Y') {
            count2++;
        }
    }

    cout << count1 << ' ' << count2 << endl;
}
