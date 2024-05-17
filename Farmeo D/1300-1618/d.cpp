// made by Esteban Santacruz (https://github.com/Jestebansamt)

#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        int sum = 0;
        vector<int> vec(n);
        for(auto&a:vec){
            cin >> a;
            sum+=a;
        }
        sort(vec.begin(), vec.end());
        for(int i = n-k; i <n ;++i){
            sum+= vec[i-k]/vec[i];
            sum-= vec[i-k];
            sum-= vec[i];
        }
        cout << sum << "\n";
    }

    return 0;
}