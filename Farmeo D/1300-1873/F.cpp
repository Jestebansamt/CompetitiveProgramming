
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
        int n,k; cin >> n >> k;
        vector<int> a(n),h(n);
        for(auto&f:a) cin >> f;
        for(auto&f:h) cin >> f;

        int ans=0, s = 0, e = 0, mod = 0, acum = 0;

        while(e < n){
            if(acum + a[e] <= k &&( e <= s ||  mod % h[e] == 0)){
                acum+= a[e];
                ans = max(ans, e - s + 1 );
                mod = h[e];
                e++;
            }else{
                acum-= a[s];
                s++;
            }
           
        }
        
        cout<<ans<<"\n";

    }
    

    return 0;
}