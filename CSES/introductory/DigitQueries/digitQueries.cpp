// made by Esteban Santacruz (https://github.com/Jestebansamt)
 
#include <bits/stdc++.h>
#define REP(i,n ) for(int i = 0; i < n; ++i)
using namespace std;
 
int main(){
     #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
     #endif
 
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    vector<long long> vec = {10, 190, 2890, 38890,488890,5888890,68888890,788888890,8888888890,98888888890, 1088888888890, 11888888888890, 128888888888890,1388888888888890,14888888888888890,158888888888888890, 1688888888888888890, 1688888888888888891};
 
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        long long num = 0;
        int index = 0;
 
        REP(i, vec.size()-2){
            if(vec[i] < n && vec[i+1] > n){
                num = vec[i];
                index = i+1;
                break;
            }
        }
        
        if(n <= 9){
            cout << n << "\n";
        }else{
            long long ten = 1;
            REP(i, index)ten *= 10;
            cout << to_string(((n - num) / (index+1)) + ten)[(n - num) % (index + 1)] << "\n";
        }
    }
    
    return 0;
}