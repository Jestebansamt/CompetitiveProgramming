// made by Esteban Santacruz (https://github.com/Jestebansamt)

#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    vector<int> vec(n), nvec;
    int m = 0;
    for(auto&a:vec){
        cin >> a;
        m = max(m,a);
    }
    int g=0;
    for(auto&a:vec){    
        g = __gcd(g, m-a);
    }
    long long ans = 0;
    for(auto&a:vec){
        ans += (m-a)/g;
    }
    cout << ans << " " <<  g << " \n";

    return 0;
}