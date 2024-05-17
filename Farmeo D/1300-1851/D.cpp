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
        vector<long long> vec(n-1), miss;
        vector<long long> found(n+1,0);
        for(auto&a:vec) cin >> a;
        long long missing = 0;
        bool ans = true;

        (vec[0] > n || vec[0] <= 0) ? missing = vec[0] : found[vec[0]] = 1;

        for(int i = 1; i <n-1; ++i){
            long long a = vec[i] - vec[i-1];
            if(a <= n && a > 0){
                found[a]++;
                if(found[a] > 1 && missing == 0) missing = a;
                else if(found[a] > 1 && missing != 0)  ans = false;
            }
            else{
                (missing == 0) ? missing = a : ans = false; 
            }
        }
    
        for(int i = 1; i < n+1; ++i){
            if(!found[i]) miss.push_back(i);
        }
       
        if(miss.size() == 2 && missing != miss[0] + miss[1]) ans = false;
        else if(miss.size() > 2) ans = false;

        cout << (ans ? "YES" : "NO") << "\n" ;
    }


    return 0;
}
