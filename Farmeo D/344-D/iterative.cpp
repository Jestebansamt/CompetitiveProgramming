// made by Esteban Santacruz (https://github.com/Jestebansamt)

#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string str;cin >> str;
    int t; cin >> t; 
    vector<vector<string>> vec;
    int value[110][110] ;
    

    for (int i = 0; i < t; ++i) {
        int n; 
        cin >> n;
        vector<string> cvec(n);
        for (auto& a : cvec) cin >> a;
        vec.push_back(cvec);
    }

    for(int i = 0 ; i <t ;++i){
        value[i][0] = 0;
        for(int j = 0; j < vec[i].size(); ++j){
            vec[i][j]
        }
    }

    
    cout << (ans == 1e9 ? -1 : ans);

    return 0;
}