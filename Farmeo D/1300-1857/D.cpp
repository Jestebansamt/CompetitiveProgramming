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
        int n; cin >> n;
        vector<int> a(n), b(n), c(n);
        for(auto&f:a) cin >> f;
        for(auto&f:b) cin >> f;
        int mx=-1e9*2;
    
        for(int i = 0 ; i <n; ++i){
            mx = max(mx, a[i]- b[i]); 
            c[i] = a[i]-b[i];
        }
        cout << count(c.begin(),c.end(), mx) << "\n";
        for(int i = 0; i <n; ++i){
            if(c[i] == mx){
                cout << i+1 << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}