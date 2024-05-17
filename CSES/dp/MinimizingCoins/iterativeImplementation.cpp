// made by Esteban Santacruz (https://github.com/Jestebansamt)

#include <bits/stdc++.h>

using namespace std;

int const N = 1e6 + 10;
int n = 0 , sum = 0; 
int value[N], coins[N], coinTrace[N]; 

int count(){
    for(int i = 1; i <= sum; ++i){
        value[i] = 1e9;
        for(int j = 0; j < n; ++j){
            if(i - coins[j] >= 0 && value[i] > value[i-coins[j]]+1){
                coinTrace[i] = coins[j];
                value[i] = value[i-coins[j]]+1;
            }
        } 
    }
    return value[sum];
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    value[0] = 0;
    cin >> n >> sum;
    for(int i = 0 ; i <n; ++i){
        cin >> coins[i];
    }
    int ans = count();
    cout << (ans == 1e9 ? -1 : ans) << "\n";

    return 0;
}