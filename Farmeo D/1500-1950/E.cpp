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
        string str; cin >> str;
        vector<int> div; 

        for(int i = 1; i*i <= n; ++i){
            if(n%i== 0){
                div.push_back(i);
                if(i != n/i) div.push_back(n/i);
            }
        }
        int ans = 1e9;
        for(int i= 0; i <div.size(); ++i){
            int diff = 0;
            map<string,int> m;
            for(int j = 0; j < n/div[i]; j++){
                string cstr = "";
                for( int k = j*div[i]; k < (j+1)*div[i]; k++){
                    cstr+= str[k];
                }
                m[cstr]++;         
            }
            int c = 0,dif = 0;
            for(auto&a:m){
                if(a.second >= 2 ){
                    c++;
                }
            }
            if(m.size() == 2){
                vector<string> vecA;
                for(auto&a:m){
                    vecA.push_back(a.first);
                }
                for(int l = 0; l < vecA[0].size(); l++){
                    
                    if(vecA[0][l] != vecA[1][l]){
                        dif++;
                    }
                }
            }
            if(c <= 1 && m.size()<=2 && dif <= 1){
                ans = min(ans, div[i]);    
            }
            
        }
        cout << ans << "\n";
    }

    return 0;
}