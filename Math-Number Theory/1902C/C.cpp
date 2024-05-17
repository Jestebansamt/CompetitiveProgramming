// made by Esteban Santacruz (https://github.com/Jestebansamt)

#include <bits/stdc++.h>

using namespace std;

int N = INT_MAX;

long long solve() {
    int n; cin >> n;
    vector<long long> vec(n), res(n - 1);
    int vanAdd = 1;
    long long ans = 0, minMod = 0;
    for (auto& a : vec) cin >> a;
    if (n == 1) {
        return 1;
    }
    sort(vec.begin(), vec.end());
    for (int i = 0; i < n - 1; ++i) {
        minMod = __gcd(minMod,  vec[i + 1]-vec[i] );
    }
    for (int i = n - 1; i >= 0; --i) {
        ans += abs(vec[i] - vec[vec.size() - 1]);
        if (i == 0 || vec[i] - minMod != vec[i - 1]) {
            ans += vanAdd * abs((vec[i] - minMod) - vec[vec.size() - 1]);
            vanAdd = 0;
        }
    }
    return (minMod == 1) ? ans : ans /= minMod;
}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
    return 0;
}