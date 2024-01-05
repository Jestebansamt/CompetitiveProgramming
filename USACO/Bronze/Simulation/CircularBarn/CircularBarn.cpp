//made by Esteban Santacruz (@jusantacruzc)

#include <bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    int n; cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
       cin >> vec[i] ;
    }

    int ans = 1e9;
    for(int i = 0; i < n; i++){
        int currentAns = 0, c = 0;
        for(int j = i; j < n + i; j++){
            (j > n-1) ? c = j-n : c = j;        
            currentAns+= vec[c] * (j - i);
        }
        ans = min(ans, currentAns);
    }
    cout << ans << "\n";

    return 0;
}