// made by Esteban Santacruz (https://github.com/Jestebansamt)

#include <bits/stdc++.h>

using namespace std;

const int P = 1e9+7;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        vector<long long> vec(n);
        long long sum = 0;
        for(int i = 0 ; i < n; ++i){
            long long a; cin >> a;
            vec[i] = a;
            sum += a%P;
        }

        long long ans = 0;
        long long best = 0, currentSum = 0 ;

        for(int i = 0; i <n; ++i){
            currentSum = max((vec[i]+currentSum), vec[i]);
            best = max(currentSum,best);
        }
        
        long long res = best;
        for(int i = 0; i < k; ++i){
            best = (best * 2) % P;
        }

        sum = (sum % P + P) % P;
        cout << ((best + sum - res) % P + P) % P << "\n";
    }
    return 0;
}