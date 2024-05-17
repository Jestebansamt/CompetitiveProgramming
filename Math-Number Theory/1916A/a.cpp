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
        int n,k; cin >> n >> k;
        long long ans = 1;
        vector<int> vec(n);
        for(auto&a:vec) cin >> a;
        for(auto&a:vec) ans*= a;

        if(2023 % ans == 0 && ans <= 2023){
            cout << "YES" <<"\n";
            cout << 2023/ans << " ";
            for(int i = 0; i < k-1; ++i) cout << 1 << " ";
            cout << "\n";
        } else{
            cout << "NO\n";
        }
    }

    return 0;
}