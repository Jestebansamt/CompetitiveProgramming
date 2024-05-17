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
        int n; cin >> n;
        vector<int> vec(n);
        for(auto&a:vec) cin >> a;
        int i=1e9,j=-1e9,k=-1e9,l=1e9;

        sort(vec.begin(), vec.end());
        i = vec[0];
        k = vec[1];
        j = vec[vec.size()-2];
        l = vec[vec.size()-1];

        cout << abs(i-j) + abs(j-k) + abs(k-l) + abs(l-i) << "\n";
    }

    return 0;
}