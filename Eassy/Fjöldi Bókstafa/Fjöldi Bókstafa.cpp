
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string line;
    int count = 0;

    cin >> line;
    count += count_if(line.begin(), line.end(), [](char c) {return c >= 'a' && c <= 'z';});
    count += count_if(line.begin(), line.end(), [](char c) {return c >= 'A' && c <= 'Z';});

    cout << count << endl;
}
