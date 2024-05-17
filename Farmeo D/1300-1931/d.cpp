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
        int n,x,y; cin >> n >> x >> y;
        long long ans = 0;
        vector<int> v(n);
        map<int, map<int,int>> mp;
        for(auto&a:v) cin >> a ;

        for(int i = 0; i <n; ++i){
            
            if(mp[v[i]%y][(x-(v[i]%x))%x] > 0){
                ans+= mp[v[i]%y][(x-(v[i]%x))%x];
            }
            mp[v[i]%y][(v[i]%x)]++;
        }
        cout << ans <<"\n";
        
    }

    return 0;
}