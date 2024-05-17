// made by Esteban Santacruz (https://github.com/Jestebansamt)

#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >>t;
    while(t--){
        int n; cin >> n;
        vector<int> vec(n),r,b;
        vector<char> colors(n);
        for(auto&a:vec)cin >> a;
        for(auto&a:colors) cin >> a;
        for(int i = 0; i <n; ++i){
            (colors[i] == 'B') ? b.push_back(vec[i]) : r.push_back(vec[i]);
        }
        sort(r.rbegin(), r.rend());
        sort(b.begin(), b.end());
        int topRange = n, bottomRange = 1;
        bool ans = true;
        for(auto&a:r){
            if(a <= topRange) topRange--;
            else ans = false;
        }
        for(auto&a:b){
            if(a >= bottomRange) bottomRange++;
            else ans = false;
        }
        cout << (ans ? "YES" : "NO") << "\n";   
    }
    return 0;
}