#include<bits/stdc++.h>
using namespace std;

bool is_leap(int year) {
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int year_start, year_end;
    vector <int> leap_years;
    cin >> year_start >> year_end;
    for (int year = year_start; year <= year_end; year++) {
        if (is_leap(year)) {
            leap_years.push_back(year);
        }
    }

    cout << leap_years.size() << endl;
    for (int i = 0; i < leap_years.size(); i++) {
        cout << leap_years[i] << " ";
    }
    cout << endl;

    return 0;
}