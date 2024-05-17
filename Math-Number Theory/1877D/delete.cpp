// made by Esteban Santacruz (https://github.com/Jestebansamt)

#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n = 6;
    vector<int>div;

    for(int i  = 1; i * i <= n; ++i){
        if(n%i == 0){
            div.push_back(i);
            div.push_back(n/i);
        }
    }

    sort(div.begin(),div.end());
    for(auto&a:div) cout << a << " " ;


    return 0;
}