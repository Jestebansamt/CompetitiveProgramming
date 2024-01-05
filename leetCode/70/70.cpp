#include <bits/stdc++.h>

using namespace std;

const int MAXN = 2 * 1e5 + 10;

vector<int> memo(MAXN, -1);
int climbStairs(int currentStair, int numStairs){

    if(currentStair == numStairs) return 1;
    if(currentStair > numStairs) return 0;
    if(memo[currentStair] != -1) return memo[currentStair];
    return memo[currentStair] = climbStairs(currentStair+1, numStairs) + climbStairs(currentStair+2, numStairs);    
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    int a; cin >> a;
    cout << climbStairs(0,a);


    return 0;
}