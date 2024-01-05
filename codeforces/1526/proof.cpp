#include <bits/stdc++.h>
using namespace std;

vector<bool> memo(2010, -1); 
bool result = false;
bool dp(int n, int subs) {
    if (n == 0) return true;  
    else if (memo[n] =! -1) return memo[n];
    else {
        while(n - subs >= 0){
            result |= dp(n - subs, subs);
            string tempSubs = to_string(subs) + "1";
            subs = stoi(tempSubs);
        }   
        memo[n] = result;
        return result;
    }

    
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int subs = 11;
        result = false;

        if(n <= 2010){
            bool result = dp(n, subs);
            result ? cout << "YES " << "\n" : cout << "NO" << "\n";
        } else{
            cout << "YES" << "\n";
        }
    }
    
    return 0;
}