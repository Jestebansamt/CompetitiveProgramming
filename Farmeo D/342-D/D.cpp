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
    
    map<int,int> mp;
    map<int,int> primes;
    for(int i = 0; i < n; ++i){
        int a; cin >> a;
        mp[a]++;
    }

    long long ans = 0;
    for(auto&a:mp){
        int k = a.first;
        for(int i = 2; i * i <= k; ++i){
            while(k%(i*i) == 0){
                k/= i*i;
            } 
        }
        primes[k]+= a.second;
    }
    for(auto&a:primes){
        cout << a.first << " " << a.second << "\n";
        if(a.first == 0){
            for(int  i = 1; i <= a.second; ++i){
                ans+= n-i;
            }
        }else{
            ans+= ((a.second-1)*a.second)/2;
        }
    }

    cout << ans << "\n";

    return 0;
}
 