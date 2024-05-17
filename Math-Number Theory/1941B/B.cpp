
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
        int ans = 1;
        int n; cin >> n;
        vector<int> vec(n);
        for(auto&a:vec) cin >> a; 
 
        for(int i = 0; i <n-2; ++i){
            if(vec[i] == 0) continue;
            if(vec[i] < 0){
                ans = 0;
                break;
            }
            else{
                vec[i+1] -= vec[i]*2;
                vec[i+2] -= vec[i];
                vec[i] = 0;
            }
        }
        for(auto&a:vec) if(a!=0) ans = 0 ;

        cout << (ans ? "yEs" : "nO") << "\n";
    }
 
    return 0;
}