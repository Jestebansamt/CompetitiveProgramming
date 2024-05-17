// made by Esteban Santacruz (https://github.com/Jestebansamt)

#include <bits/stdc++.h>

using namespace std;

string power[62];

void generatePower(){
    for(int i = 0; i <62; ++i){
        power[i] = to_string(1LL<<i);
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    generatePower();
    while(t--){
        int n; cin >> n;
        int ans = 1e9, cans = 0;
        string sn = to_string(n);
        for(auto&a:power){
            int i = 0, j = 0;
            while(i < a.size() && j < sn.size()){
                if(a[i] == sn[j]){
                    i++;
                }
                j++;
            }
            cans = (a.size()-i) + (sn.size()-i);
            ans = min(ans, cans);
        }

        cout << ans << "\n";
    }

    return 0;
}