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
        int ans = n;
        cout << (k >= n-1 ? 1 : n) << "\n";
    }
    return 0;
}