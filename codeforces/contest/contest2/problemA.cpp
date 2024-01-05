// made by Esteban Santacruz (@jusantacruzc)

#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif
    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    int t; cin >> t;
    int count = 0;
    while(t--){
        int p, q; cin >> p >> q;
        if(q-p >= 2) count++; 
    }

    cout << count ;
    return 0;
}