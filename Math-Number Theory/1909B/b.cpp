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
        int n; cin >> n;
        vector<long long> vec(n);
        for (auto& a : vec) cin >> a;
        vector<string> vecMask;

        for (int i = 0; i < n; ++i) {
            string mask;
            for (int k = 61; k >= 0; --k) {
                long long a = ((vec[i] >> k) & 1);
                mask += to_string(a);
            }
            vecMask.push_back(mask);
        }

        for (int i = 61; i >= 0; --i) {
            int z = 0, o = 0;
            for (int j = 0; j < n; ++j) {
                if(vecMask[j][i] & 1) o = 1;
                else z = 1;
            }
           
            if (z && o){ 
                cout << (1LL << (62 - i)) << "\n"; 
                break;
            }
        }
    }

    return 0;
}