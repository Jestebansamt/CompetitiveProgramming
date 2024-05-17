// made by Esteban Santacruz (https://github.com/Jestebansamt)

#include <bits/stdc++.h>

using namespace std;

long long n=0,m=0,k=0;

long long f(long long x){
    return (x/n) + (x/m) - (2 * (x/lcm(n,m)));
}

long long solve(){
    if(f(max(n,m)*k) == k){
        return k;
    }
    long long l = 0, r = 2e18, mid = 0;

    while(l < r){
        cout << l << " " << r << "\n";
        mid = (l+r)/2;
        long long cmid = f(mid);

        if(cmid == k) return mid;
        else{
            if((cmid % n == 0 && cmid % m == 0) || (cmid % n != 0 && cmid % m != 0)){
                cmid-= min(cmid%m, cmid%n);
            }
        }
        if(cmid > l) l = mid;
        else r = mid;

    }
    return mid;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n >> m >> k;
    cout << solve();


    return 0;
}