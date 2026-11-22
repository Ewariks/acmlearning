#include <bits/stdc++.h>
using namespace std;

struct student {
    string name;
    int chinese, math, english, total;
}a, ans;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a.name >> a.chinese >> a.math >> a.english;
        a.total = a.chinese + a.math + a.english;
        if (i == 0) {
            ans = a;
        }
        if (a.total > ans.total) {
            ans = a;
        }
    }
    cout << ans.name << " "
        << ans.chinese << " "
        << ans.math << " "
        << ans.english << " "
        << endl;

    return 0;
}