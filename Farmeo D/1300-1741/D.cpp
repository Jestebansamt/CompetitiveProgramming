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
        vector<int> vec(n), currentvec;
        for(auto&a:vec) cin >> a ;
        int dif = 0, ans = 0;
        bool van = true;
        while(vec.size() > 1 && van){
            for(int i = 0; i < vec.size(); i+=2){

                if(abs(vec[i] - vec[i+1]) != (1<<dif)) van = false;

                if(vec[i] < vec[i+1]){
                    currentvec.push_back(vec[i]);
                }else{
                    ans++;
                    currentvec.push_back(vec[i+1]);
                }
            }
            vec= currentvec;
            currentvec = {};
            dif++;
        }
        cout << (!van ? -1 : ans) << "\n";
    }

    return 0;
}