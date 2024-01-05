// made by Esteban Santacruz (@jusantacruzc)

#include <bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i = a; i < b; i++)


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    int t; cin >> t;

    
    while(t--){
        
        int n; cin >> n;
        string str; cin >> str;
        vector<long long> sum;
        long long result = 0;

        REP(i,0,n){
            (str[i] == 'L') ? sum.push_back(i) : sum.push_back((n-1)-i);
            result+=sum[i];
        }
        
        if(n > 1){
            int mid = n/2;
            string substr1 = str.substr(0,mid);
            string substr2 = str.substr(n-mid);
            multimap<int, int> mult;

            REP(i,0,mid){
                if(substr1[i] == 'L'){
                    mult.insert({n-1-i, i});
                }

                if(substr2[mid-i-1] == 'R'){
                    mult.insert({n-1-i, n-1-i});
                }
            }

            vector<long long> claves;
            vector<long long> valores;
            for(const auto& par:mult){
                claves.push_back(par.first);
                valores.push_back(par.second);
            }
        
            
            int w = claves.size()-1;
            REP(i,0, n){
                if(w >= 0){
                    result = result - sum[valores[w]] + claves[w];
                    w--;
                }
                cout << result << " ";
            }
            cout << "\n";

        } else{
            cout << 0 << "\n";
        }
        

        

    }

    
    return 0;
}
