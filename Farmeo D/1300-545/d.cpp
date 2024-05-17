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
    vector<int> vec(n);
    for(auto&a:vec) cin >> a;
    sort(vec.begin(), vec.end());
    long long sum = 0;
    int ans = 0;
    for(auto&a:vec){
        if(sum <= a){
            sum+=a;
            ans++;
        }
    }
    cout << ans;

    return 0;
}