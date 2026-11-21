#include <bits/stdc++.h>
using namespace std;

double longofstring(double x1, double y1, double x2, double y2) {
    double x = x2-x1;
    double y = y2-y1;
    double dis = sqrt(x * x + y * y);
    return dis;
}

int main() {
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double total_distance = longofstring(x1, y1, x2, y2) + longofstring(x1, y1, x3, y3)
                            +longofstring(x2, y2, x3, y3);
    printf("%.2f", total_distance);
    return 0;
}