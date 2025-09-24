
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string line;
    getline(cin, line);
    n = line.length();

    line.erase(remove(line.begin(), line.end(), ' '), line.end());

    cout << line << endl;
}
