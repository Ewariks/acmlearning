#include <bits/stdc++.h>
using namespace std;

struct student {
    string name;
    int chinese, math, english, total;
};

int main() {
    int n;
    cin >> n;
    vector<student> students(n);
    vector<string> peers;
    for (int i = 0; i < n; i++) {
        cin >> students[i].name >> students[i].chinese
            >> students[i].math >> students[i].english;
        students[i].total = students[i].chinese + students[i].math + students[i].english;
    }
    for (int i = 0; i < n; i++) {
        const student& player_1 = students[i];
        for (int j = i + 1; j < n; j++) {
            if (abs(player_1.total - students[j].total) <= 10) {
                 if (abs(player_1.chinese - students[j].chinese) <= 5 &&
                     abs(player_1.math - students[j].math) <= 5 &&
                     abs(player_1.english - students[j].english) <= 5) {
                     peers.push_back(player_1.name + " " + students[j].name);
                 };
            }
        }
    }

    for (int i = 0; i < int(peers.size()); i++) {
        cout << peers[i] << endl;
    }

    return 0;
}