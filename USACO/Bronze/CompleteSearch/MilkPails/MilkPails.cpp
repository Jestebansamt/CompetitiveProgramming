// made by Esteban Santacruz (https://github.com/Jestebansamt)

#include <bits/stdc++.h>

using namespace std;
int main(){
    freopen("i.txt", "r", stdin);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int x, y, m ; cin >> x >> y >> m;
    
    int ans = 0;
    for(int i = (m / y); i >= 0 ; i--){

        if( m - (y*i) > x ){
            ans = max(ans, ((y*i) + (x*int((m - (y*i)) / x))));
        }
    }
    cout << ans << "\n";

    return 0;
}