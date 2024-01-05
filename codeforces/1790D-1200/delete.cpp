// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n; cin >> n;
    map<int, int> mp;
    vector<int> a(n);
    int ans = 1;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    for(int i = 1; i < n; i++) {
        if(a[i] != a[i - 1] + 1) {
            if(mp[a[i] - 1]) {
               mp[a[i] - 1]--; 
            }
            else {
                ans++;
            }
            mp[a[i - 1]]++;
        }
    }
    cout << ans << '\n';
}
 
int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif
 
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
 
    int t; cin >> t;
    while(t--) solve();
}
