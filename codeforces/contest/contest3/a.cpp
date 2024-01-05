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
    vector<long long> li(n, 0), lj(n,0);
    vector<string> strv(n, "");

    REP(i,0,n){
         cin >> strv[i];
        REP(j,0,n){
            if(strv[i][j] == 'o'){
                lj[j]++;
                li[i]++;
            }
        }
    }   
    long long ans = 0;
    REP(i,0,n){
        REP(j,0,n){
            if(strv[i][j] == 'o'){
                ans += (lj[j]-1) * (li[i]-1);
            }
        }
    }
    
   cout << ans;


    return 0;
}