//made by Esteban Satnacruz (@jusantacruzc)

#include <bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i = a; i < b; ++i )

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);
    
    int n; cin >> n ;
    vector<int> vec(n);

    vector<vector<char>> matriz(n, vector<char>(n));    

    REP(i,0,n){
        REP(j,0,n){
            cin >> matriz[i][j] ;
        }
    }

    REP(i,0,n){
        int c = 0;
        vector<int> currentVec(n);
        REP(j,0,n){
            if(matriz[i][j] == 'o'){
                c++;
                currentVec[j]++;
            }
        }
       
        if(c >= 2 ){
            REP(k,0,n){
                REP(j,0,n){
                    if(matriz[k][j] == 'o' && currentVec[j] == 1 && k != i)  vec[j]+= c-1; 
                }
            }
        }
    }
    int ans = 0;
    for(int a: vec ) ans+=a;
    cout << ans;

    return 0;
}