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
        int n,m,k; cin >> n >> m >> k;
        vector<int> a(n);
        map<int,int> Nmp, Wmp;
        for(int i = 0;  i< n; ++i){
            int j = 0 ; cin >> j;
            a[i] = j;
        }
        for(int i = 0;  i< m; ++i){
            int j = 0 ; cin >> j;
            Nmp[j]++;
        }
        
        int ans = 0, sum = 0, van = 0;
        for(int i = 0; i < m; ++i){
            Wmp[a[i]]++;
            sum+=( Wmp[a[i]] <= Nmp[a[i]]);
        }
        ans += (sum>= k);
        for(int i = m; i < n; ++i){
            Wmp[a[i]]++;
            Wmp[a[i-m]]--;
            if(a[i] != a[i-m]) {
                if(Nmp[a[i]] >= 1 && Wmp[a[i]] <= Nmp[a[i]] ){
                    sum++;
                }
                if(Nmp[a[i-m]] >= 1 && Wmp[a[i-m]] < Nmp[a[i-m]]){
                    sum--;
                }  
            }
            ans += (sum>=k);   
        }
        cout << ans << "\n";
    }
    return 0;
}