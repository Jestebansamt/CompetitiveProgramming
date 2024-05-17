// made by Esteban Santacruz (https://github.com/Jestebansamt)

#include <bits/stdc++.h>

using namespace std;

vector<int> pf(int n) {
    int d = 2;
    vector<int> p;

    while (n > 1) {
        while (n % d == 0) {
            p.push_back(d);
            n /= d;
        }
        d++;
    }
    return p;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);
#endif


    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> vec(n);
        for (auto& a : vec) cin >> a;
        string mask;
        vector<string> maskvec();

        for (long long i = 0; i < 60; ++i) {
            mask += to_string(((n >> i) & 1));
        }

        reverse(mask.begin(), mask.end());

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < j; ++j) {

            }
        }
    }



    return 0;
}