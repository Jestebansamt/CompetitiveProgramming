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
        int n;cin >> n;
        vector<int> vec(n);
        for(auto&a:vec) cin >> a;
        int x = 0, ans = 1;
        for(int i = 0; i <n-1; ++i ){
            if(vec[i] > vec[i+1]){
                if(abs(vec[i]-vec[i+1]-1) <= 1){
                    x = max(x, vec[i+1]+1);
                }else{
                    x = max(x,(vec[i]+vec[i+1]+1)/2);
                }
            }
        }
        
        for(int i = 0 ;i <n-1; ++i){
            if(abs(vec[i]-x) > abs(vec[i+1]-x)){
                ans = 0;
                break;
            }
        }
        cout << (ans? x : -1 ) << "\n";   
    }

    return 0;
}