// made by Esteban Santacruz (https://github.com/Jestebansamt)

#include <bits/stdc++.h>

using namespace std;

int tri[5] = {1,3,6,10,15};
vector<int> memo(60, 0);

int dp(int n) {
    if(n == 0) return 0;
    if(n < 0) return INT_MAX - 1;
    if(memo[n] > 0) return memo[n];

    int solve = INT_MAX - 1;
    for(int i = 0; i < 5; ++i){
        solve = min(solve, 1 + dp(n-tri[i]));
        memo[n] = solve;
    }
    return memo[n];
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(n <= 30) {
            cout << dp(n) << '\n';
        }
        else {
            cout << (((n / 30) - 1) * 2) + dp((n % 30) + 30) << '\n';
        }
    }

    return 0;
}