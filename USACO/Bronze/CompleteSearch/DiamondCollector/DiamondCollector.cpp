// made by Esteban Santacruz (https://github.com/Jestebansamt)

#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("i.txt", "r", stdin);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, k; cin >> n >> k;
    vector<int> vec(n);
    for(int i = 0; i < n; ++i) cin >> vec[i];
    sort(vec.begin(), vec.end());

    int ans = 0;
    int diff = 0;
    for(int i = 1; i < n; ++i){
        if(vec[i] - vec[diff] > k ){
            while(diff < n && (vec[i] - vec[diff]) > k ){
                diff++;
            }
        }
        ans = max(ans, (i - diff)+1);
    }
    cout << ans;
    return 0;
}