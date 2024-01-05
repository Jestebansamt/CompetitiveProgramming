// made by Esteban Santacruz (@jusantacruzc)

#include <bits/stdc++.h>

using namespace std;
int result = 0;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        vector<int> vec1(n);
        vector<int> vec2(n);

        for(int i = 0; i < n; i++) cin >> vec1[i];
        for(int i = 0; i < n; i++) cin >> vec2[i];

        vector<int> dp1(n);
        dp1[0] = vec1[0];
        vector<int> dp2(n);
        dp2[0] = vec2[0];

        for(int i = 1; i < n; i++) dp1[i] = dp1[i-1] + vec1[i];
        for(int i = 1; i < n; i++) dp2[i] = max(dp2[i-1], vec2[i]);

        vector<int> dp3(n);
        int m = 0;
        for(int i = 0; i < n; i++){
            dp3[i] = (dp2[i] * (k-(i+1))) + dp1[i];
            if(i <= k-2 ) m = max(m, dp3[i]);
        }
     
        int ans = 0;

        if(k == 1) ans = dp1[0];
        else if(k > n) ans = max(m, dp1[n-1]);
        else if(n == 1) ans = max(dp1[0], dp3[0]);
        else if(n >= 2) ans = max(m, dp1[k-1]);
        cout << ans << "\n";
    }
    
    return 0;
}