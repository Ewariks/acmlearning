#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1024;
int people[MAXN][MAXN];

void pardon(int x, int y, int length) {
    if (length == 1) return;
    int half = length / 2;
    for (int i = x; i < x + half; i++) {
        for (int j = y; j < y + half; j++) {
            people[i][j] = 0;
        }
    }
    pardon(x+half, y, half);
    pardon(x, y + half, half);
    pardon(x+half, y+half, half);
}

int main() {
    int n;
    cin >> n;
    int length = 1 << n;
    for (int x = 0; x < length; x++) {
        for (int y = 0; y < length; y++) {
            people[x][y] = 1;
        }
    }
    pardon(0, 0, length);
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            cout << people[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}