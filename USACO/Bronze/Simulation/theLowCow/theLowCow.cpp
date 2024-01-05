// made by Esteban Santacruz (@jusantacruzc)

#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGDE
        freopen("i.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    int x, y; cin >> x >> y;
 
    int d = (x-y) * -1;
    int currentEx = 0, ex = 0, ans = 0, i=0;

    while(((currentEx ^ d) < 0) || abs(currentEx) < abs(d)){
        currentEx = (i%2 == 0) ? (1 << i) : -(1 << i);
        ans += abs(currentEx) + abs(ex);
        ex = currentEx;
        i++;
    }
    ans= ans - (abs(currentEx) - abs(d));

   
    cout << ans; 
    
    return 0;
}
