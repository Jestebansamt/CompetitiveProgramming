//made by Esteban Santacruz (@jusantacruzc)

#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    int n,s; cin >>n >> s;
    int ans = 0;

    for(int i = 0; i < n; i++){
        int j ; cin >> j;

        if(j >= s ){
            ans += int(j/s);
        }
        
    }
    (n == 1 && s == 1) ?
        cout << 0:
        (ans == 0) ? cout << -1 : cout << ans;


    return 0;
}