// made by Esteban Santacruz (https://github.com/Jestebansamt)

#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < n; ++i)
using namespace std;
int ans = 0;
int n= 8;
vector<string> board(n);
vector<int> csol;
vector<bool> van(n, false);

void solve(){
    if(csol.size() == n){

        bool isValid = true;
        REP(i , n){
            
            if(isValid == false) break;
            if( board[i][csol[i]] == '*') isValid = false;

            REP(j,n){
                if(j > i ){
                    if(csol[i] + (i - j) == csol[j]) isValid = false;
                }
                else if(j < i){
                    if(csol[i] - (i - j) == csol[j]) isValid = false;                
                }    
            }
        }
        if (isValid) ans++;
    }else{
        REP(i,n){
            if(van[i]) continue;
            csol.push_back(i);
            van[i] = true;
            solve();
            csol.pop_back();
            van[i] = false;
        }   

    }
}

int main(){
     #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
     #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
 
    for(auto& a: board) cin >> a ;
    solve();
    cout << ans;

    return 0;
}