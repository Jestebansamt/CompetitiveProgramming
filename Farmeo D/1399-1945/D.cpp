// made by Esteban Santacruz (https://github.com/Jestebansamt)

#include <bits/stdc++.h>

using namespace std;

long long solve(){
    int n, m ; cin >> n >> m;
    vector<int> a(n), b(n);
    for(int i = n-1; i >= 0 ; --i) cin >> a[i];
    for(int i = n-1; i >= 0 ; --i) cin >> b[i];
    m = n-m;
    long long ans = 0, cursum = 0, mv = a[m], cans = 1e9+1;

    for(int i = 0; i < m; ++i){
        ans+= min(a[i],b[i]);
    }
    for(int i = m; i < n-1; ++i){
        cursum+= b[i];
        if(cursum + a[i+1] < mv){
            cans = min(cans, cursum + a[i+1]);
            mv = cans;
        }
    }
    return (cans == 1e9+1 ? ans += mv : ans+=cans);
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        cout << solve() << "\n";
    }

    return 0;
}