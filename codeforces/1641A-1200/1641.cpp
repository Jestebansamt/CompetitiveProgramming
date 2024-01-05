// made by esteban Santacruz (jusantacruzc)
#include <bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(int i = a; i < b; i++)

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    int t ; cin >> t; 
    while(t--){
        int n, mul; cin >> n >> mul;
        map<int,int> m;
        map<int,bool> vb;
        vector<int> v(n);
        REP(i,0,n){
            int j ; cin >> j;
            m[j]++;
            v[i] = j;
        }

        sort(v.begin(), v.end());

        int ans = 0;
        for(int i: v){
            if(m.find(i*mul) != m.end() && m[i*mul] > 0 ){
                m[i*mul]--; 
                vb[i*mul] = true; 
            } else{
                if(vb[i] == false){
                    cout << i << "\n";
                    ans++;    
                }
            }
            
        }
        cout << "el resultado es " << ans << "\n";
    } 


    return 0;
}