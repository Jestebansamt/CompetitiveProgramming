// made by Esteban Santacruz (https://github.com/Jestebansamt)

#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("i.txt", "r", stdin);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n; cin >> n ;
    vector<int> vec(n);
    
    for(int i = 0; i < n; ++i) cin >> vec[i]; 
    int ans = 0;

    for(int i = 0; i < n; ++i){
        
        for(int j = i + 1; j <= n; ++j){
            vector<int> cv;
            int sum = 0;
            for(int k = i; k < j; ++k){
                cv.push_back(vec[k]);
                sum += vec[k];
            }
            
            for(int k = 0; k < cv.size(); ++k){
                if(cv[k] * cv.size()  == sum ){
                    ans++;
                    break;
                }   
            }
        }  
    }
    cout << ans;

    return 0;
}