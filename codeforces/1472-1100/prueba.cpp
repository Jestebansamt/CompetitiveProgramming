#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;
vector<int> a(MAXN);
vector<long long> dp(MAXN, -1);

long long solve(int i, int n) {
    if (i > n) return 0;
    if (dp[i] != -1) return dp[i];
    return dp[i] = a[i] + solve(i + a[i], n);
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        long long max_score = 0;
        for (int i = 1; i <= n; i++) {
            long long score = solve(i, n);
            max_score = max(max_score, score);
        }

        cout << max_score << endl;
        fill(dp.begin(), dp.begin() + n + 1, -1);
    }

    return 0;
}
