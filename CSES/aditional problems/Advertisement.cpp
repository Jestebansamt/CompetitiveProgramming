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
    for(auto&a:vec) cin >> a ;
    stack<pair<long long,long long>> s;
    long long ans = 0;

    for(int i = 1; i <= n; ++i){
        if(i == 1 ){
            s.push({vec[i-1], i-1});
            continue;
        }

        pair<int,int> cp;
        cp.first = vec[i-1];
        cp.second = i-1;
        while(!s.empty() && s.top().first > vec[i-1]){
            cp.second = s.top().second;
            ans = max(ans, (s.top().first * abs((s.top().second+1-i))));
            s.pop();
        }
        s.push(cp);
    }

    while(!s.empty()){
        ans = max(ans, s.top().first * (n - s.top().second));
        s.pop();
    }
    cout << ans << " ";
    
    return 0;
}
