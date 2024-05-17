// made by Esteban Santacruz (https://github.com/Jestebansamt)

#include <bits/stdc++.h>

using namespace std;

// REVISAR MODULO
long long mod=(1e9)+7;
long long n = 0;
vector<long long> memo(1e6,-1);

long long dp(long long sum ){
    if(sum > n) return 0;
    if(sum == n) return 1;
    if(memo[sum]!=-1) return memo[sum];
    if(memo[sum]==-1) memo[sum] = 0;

    for(int i = 1; i <=6;++i){
        memo[sum] += dp(sum+i)%mod;
    }
    return memo[sum];
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    long long ans = 0;
    for(int i = 1; i <= 6; ++i){
       ans += dp(i);
    }
    cout << ans%mod;

    return 0;
}