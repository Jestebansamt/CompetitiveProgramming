// made by Esteban Santacruz (https://github.com/Jestebansamt)

#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    while(t--){
        int n, m ,k; cin >> n >> m >> k;
        vector<int> a(n), b(m);
        for(auto&f:a) cin >> f;
        for(auto&f:b) cin >> f;
        int ans = 0;
        for(int i = 0; i <n; ++i){
            for(int j = 0; j <m; ++j){
                if(a[i] + b[j] <= k) ans++;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}