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
    int n,k; cin >> n >> k;

    string str = "";
    for(int i = 0; i <n; ++i){
        string f; cin >> f;
        str+=f;
        str+=" ";
    }
    for(int i = 0; i <n; ++i){
        string f; cin >> f;
        str+=f;
        str+=" ";
    }
    
    cout << str;
    return 0;
}   