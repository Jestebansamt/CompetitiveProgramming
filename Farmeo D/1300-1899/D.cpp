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
        for(auto&a:vec)cin >> a;
        int m=1e9+1,mc=0;
        for(int i = 0;  i <n; ++i){
            if(vec[i] < m ){
                mc = i;
                m = vec[i];
            }
        }


        int current = vec[n-1];
        int ans = 1;
        for(int i = n-2;  i >= 0 ; --i){
            if(current >= vec[i] ){
                ans++;
            }else{
                break;
            }
            current = vec[i];
        }
        cout << ((n-ans <= mc) ? n-ans : -1) << "\n";
    }


    return 0;
}