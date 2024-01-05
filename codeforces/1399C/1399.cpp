// made by Esteban Santacruz (@jusantacruzc)

#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> vec(n);
 
        for(int i = 0; i < n ; i++){
            cin >> vec[i];
        }
        
        int higher = 0;
        for(int i = 0; i < n; i++){
            map<int, int> repetitions = {} ;
            cout << endl;
            for(int j = 0; j < n; j++){
                if(j != i ){
                    repetitions[vec[i] + vec[j]]++;
                }
            }
            for (const auto& par : repetitions) {
                cout << par.first << " " <<  par.second << endl;
                if(par.second > higher){
                    higher = par.second;
                }
            }
        }
        cout << higher << endl;
    }
    return 0;
}