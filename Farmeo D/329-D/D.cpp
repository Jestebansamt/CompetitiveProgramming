// made by Esteban Santacruz (https://github.com/Jestebansamt)

#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,m; cin >> m >> n;
    vector<int> vec(n);
    for(auto&a:vec) cin >> a;
    vector<int> storage((2*1e5)+1);
    int currentStorage = 0, currentValue = 0;
    for(int i = 1 ; i<=n; ++i){
        storage[vec[i-1]]++;
        if(storage[vec[i-1]] > currentStorage || (storage[vec[i-1]] == currentStorage && currentValue > vec[i-1])){
            currentValue = vec[i-1];
            currentStorage = storage[vec[i-1]];
        }
        cout << currentValue << "\n";
    }

    return 0;
}