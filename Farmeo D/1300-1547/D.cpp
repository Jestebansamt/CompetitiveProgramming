// made by Esteban Santacruz (https://github.com/Jestebansamt)

#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n = 10;

    for(int i =0 ; i < 31; ++i){
        if((n & i)){
            cout << '1';
        }else{
            cout << '0';
        }
    }
    return 0;
}