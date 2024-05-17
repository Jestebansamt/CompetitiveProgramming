// made by Esteban Santacruz (https://github.com/Jestebansamt)

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while (t--) {
        long long n, k; cin >> n >> k;
        long long g = __gcd(n, k);
        cout << (n == g ? (k * k / n) : (k * n) / g) << "\n";
    }
    return 0;
}