
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;

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
        vector<long long> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long max_sum = 0;
        long long current_sum = 0;

        for (int i = 0; i < n; i++) {
            if (current_sum + a[i] < 0) {
                // Start a new subarray
                current_sum = 0;
            } else {
                current_sum += a[i];
            }

            max_sum = max(max_sum, current_sum);
        }

        cout << max_sum << endl;
    }

    return 0;
}
