// made by Esteban Santacruz (@jusantacruzc)

#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE    
        freopen("input.txt", "r", stdin);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;

    for(int i = 0; i < t; i++){
        long long n,k; cin >> n >> k;
        (n%2 == k%2 && k*k <= n) ? cout << "YES" <<endl : cout << "NO" <<endl;
    }


    return 0;
}
