// made by Esteban Santacruz (https://github.com/Jestebansamt)

#include <bits/stdc++.h>

using namespace std;

long long n;

long long f(long long x){
    return ((x*(x+1))/2) >= n;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        long long l = 0, r = 2648956422, m = 0, ans = 2;
        cin >> n;
        while(l<=r){
            m = (l+r) / 2;
            if(f(m)){
                // If the new m is valid update ans 
                ans = m;
                r = m-1;
            }else{
                l = m+1;
            }
        }
        if(((ans)*((ans)+1))/2 == n){
            cout << ans+1 << "\n";
        }else{
            cout << ans+ abs(n-((ans-1)*ans/2)) << "\n";
        }
    }
    return 0;
}