// made by Esteban Santacruz (https://github.com/Jestebansamt)

#include <bits/stdc++.h>

using namespace std;

int N = (1e5)*3;
vector<int> ans, vec(N, 0);

void r(int a) {
    if (vec[a] == a) {
        if (vec[a] != 0) ans.push_back(a);
        vec[a] = 0;
    }
    if (vec[a] != 0) {
        ans.push_back(a);
        r(vec[a]);
        vec[a] = 0;
    }
    else {
        cout << ans.size() << "\n";
        for (int i = ans.size() - 1; i >= 0; --i) {
            cout << ans[i] << " ";
        }
        ans.clear();
        cout << "\n";
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while (t--) {
        
        int n; cin >> n;
        vector<int> leaf(n + 1, 1);
        for (int i = 1; i <= n; ++i) {
            int a; cin >> a;
            vec[i] = a;
        }
        int f =0;
        for (auto& a : vec)leaf[a] = 0;
        for (int i = 1; i <=n;++i){
            if(leaf[i]) f++;
        }

        cout << (f==0?1:f) << "\n";
        if(f==0) cout <<"1\n1\n";
        for (int i = 1; i <= n; ++i) {
            if (leaf[i] == 1) {
                r(i);
            }
        }
        cout << "\n";
    }
    return 0;
}