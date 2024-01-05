// made by Esteban Santacruz (@jusantacruzc)

#include <bits/stdc++.h>

using namespace std;
long long n;

long long isVec1 = true;
vector<long long> vec1;
vector<long long> vec2;
map<pair<long long, bool>, long long> memo;

long long dp(long long i, bool isVec1){
    if(i >= n) return 0;
    if(memo.find({i, isVec1}) != memo.end()) return memo[{i,isVec1}];

    (isVec1) 
        ? memo[{i,isVec1}] = max(dp(i+1, false) + vec1[i], dp(i+1, true))
        : memo[{i,isVec1}] = max(dp(i+1, true) + vec2[i], dp(i+1, false));

    return memo[{i,isVec1}];
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif 

    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    cin >> n;
    vec1.resize(n);
    for(int i = 0; i < n; i++) cin >> vec1[i];
    vec2.resize(n);
    for(int i = 0; i < n; i++) cin >> vec2[i];

    cout << max(dp(0, false), dp(0,true));

    return 0;
}