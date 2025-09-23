
#include <iostream>
using namespace std;
#include <string>

int main()
{
    string word;
    int i;

    getline(cin, word);
    i = word.length();

    while (i > 0) {
        i--;
        cout << word[i];
    }
}
