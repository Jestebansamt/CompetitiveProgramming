#include <bits/stdc++.h>
using namespace std;

const int N = 2 * 1e5 + 10;
vector<int> a(N), memo(N);

int longJumps(int index, int numberElements) {
    if (index > numberElements) return 0;
    if (memo[index] != -1) return memo[index];
    memo[index] = longJumps(index + a[index], numberElements) + a[index];
    longJumps(index + 1, numberElements);
    return memo[index];
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++) {
            memo[i] = -1;
            cin >> a[i];
        }
        cout << longJumps(1, n) << endl;
    }
}
