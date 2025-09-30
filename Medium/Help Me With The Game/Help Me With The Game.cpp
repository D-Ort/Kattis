
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string sol[2] = {"White: ", "\nBlack: "};

    vector <string> positions[2][6][8];
    string line, letters = "abcdefgh", pos, pieces = "KQRBN";
    char l;
    int high = 17, width=33;
    bool first;

    for (int i = 0; i < high; i++) {
        getline(cin, line);

        if (i % 2 != 0) {
            for (int j = 2; j < width; j += 4) {
                l = line[j];
                pos = (letters[(j - 2) / 4]);

                if (l == 'K') {
                    positions[0][0][7 - (((i + 1) / 2) - 1)].push_back(string(1, pieces[0]) + pos);
                }
                else if (l == 'Q') {
                    positions[0][1][7 - (((i + 1) / 2) - 1)].push_back(string(1, pieces[1]) + pos);
                }
                else if (l == 'R') {
                    positions[0][2][7 - (((i + 1) / 2) - 1)].push_back(string(1, pieces[2]) + pos);
                }
                else if (l == 'B') {
                    positions[0][3][7 - (((i + 1) / 2) - 1)].push_back(string(1, pieces[3]) + pos);
                }
                else if (l == 'N') {
                    positions[0][4][7 - (((i + 1) / 2) - 1)].push_back(string(1, pieces[4]) + pos);
                }
                else if (l == 'P') {
                    positions[0][5][7 - (((i + 1) / 2) - 1)].push_back(pos);
                }

                else if (l == 'k') {
                    positions[1][0][7 - (((i + 1) / 2) - 1)].push_back(string(1, pieces[0]) + pos);
                }
                else if (l == 'q') {
                    positions[1][1][7 - (((i + 1) / 2) - 1)].push_back(string(1, pieces[1]) + pos);
                }
                else if (l == 'r') {
                    positions[1][2][7 - (((i + 1) / 2) - 1)].push_back(string(1, pieces[2]) + pos);
                }
                else if (l == 'b') {
                    positions[1][3][7 - (((i + 1) / 2) - 1)].push_back(string(1, pieces[3]) + pos);
                }
                else if (l == 'n') {
                    positions[1][4][7 - (((i + 1) / 2) - 1)].push_back(string(1, pieces[4]) + pos);
                }
                else if (l == 'p') {
                    positions[1][5][7 - (((i + 1) / 2) - 1)].push_back(pos);
                }
            }
        }
    }
    cout << sol[0];
    first = true;
    for (int j = 0; j < 6; j++) {
        for (int k = 0; k < 8; k++) {
            if (positions[0][j][k].size() > 0) {
                sort(positions[0][j][k].begin(), positions[0][j][k].end());
                for (int l = 0; l < positions[0][j][k].size(); l++) {
                    if (first) {
                        first = false;
                    }
                    else {
                        cout << ",";
                    }
                    cout << positions[0][j][k][l] << k + 1;
                }
            }
        }
    }
    cout << sol[1];
    first = true;
    for (int j = 0; j < 6; j++) {
        for (int k = 7; k >= 0; k--) {
            if (positions[1][j][k].size() > 0) {
                sort(positions[1][j][k].begin(), positions[1][j][k].end());
                for (int l = 0; l < positions[1][j][k].size(); l++) {
                    if (first) {
                        first = false;
                    }
                    else {
                        cout << ",";
                    }
                    cout << positions[1][j][k][l] << k+1;
                }
                
            }
        }
    }
cout << endl;
}
