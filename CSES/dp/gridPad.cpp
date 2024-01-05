// made by Esteban Santacruz (@jusantacruzc)

#include <bits/stdc++.h>

using namespace std;


int d;
const int mod = 1e9 + 7;
vector<vector<int>> memo(1001, vector<int>(1001, -1));
int result;

int dp(int x, int y, vector<string> &vecStr){
    if(x+1 == d && y+1 == d && vecStr[x][y] != '*') return 1;
    if((x+1 > d || y+1 > d) || vecStr[x][y] == '*') return 0;
    if(memo[x][y] != -1) return memo[x][y];

    memo[x][y] = (dp(x+1, y, vecStr) + dp(x, y+1, vecStr)) % mod;
    return memo[x][y];
}

int main()
    {
    #ifndef ONLINE_JUDGE
        freopen("gridPad.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> d;
    vector<string> vecStr(d);

    for (int i = 0; i < d; i++)  cin >> vecStr[i];
    
    cout << dp(0, 0, vecStr); 

    return 0;
}
