#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (long long i = 5; i <= n / i; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<long long> nums;
    vector<long long> prime;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    for (int i = 0; i < n; i++) {
        if (isPrime(nums[i])) {
            prime.push_back(nums[i]);
        }
    }

    for (int i = 0; i < prime.size(); i++) {
        cout << prime[i] << " ";
    }

    cout << endl;

    return 0;
}