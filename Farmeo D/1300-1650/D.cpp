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
        deque<int> d;
        for(int i = 0; i <n ;++i){
            int a; cin >> a;
            d.push_back(a);   
        }
        vector<int> ans(n+1,0);
        for(int i = n; i >= 1; --i){
            while(d.back() != i){
                ans[i]++;
                int c = d.front();
                d.pop_front();
                d.push_back(c);
            }
            d.pop_back();
        }
        
        for(int i = 1; i <=n; ++i){
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}