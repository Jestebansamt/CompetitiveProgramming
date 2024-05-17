// made by Esteban Santacruz (https://github.com/Jestebansamt)
#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> vec;
int t;
int memo[105][105];

int dp(string str, int i) {
    if (str == "") return 0;
    if (i >= t) return 1e9;
    if (memo[str.size()][i] > 0 && memo[str.size()][i] < 1e9) return memo[str.size()][i]; 

    memo[str.size()][i] = 1e9; 
    for (int j = 0; j < vec[i].size(); ++j) {
            if ( vec[i][j].size() <= str.size() &&  str.substr(0, vec[i][j].size()) == vec[i][j]) {
                string nextStr = str.substr(vec[i][j].size());
                memo[str.size()][i] = min(memo[str.size()][i], dp(nextStr, i + 1) + 1);
            }
        }
    memo[str.size()][i] = min(memo[str.size()][i], dp(str, i + 1));
    return memo[str.size()][i];
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    string str; 
    cin >> str;
    cin >> t; 



    for (int i = 0; i < t; ++i) {
        int n; 
        cin >> n;
        vector<string> cvec(n);
        for (auto& a : cvec) cin >> a;
        vec.push_back(cvec);
    }

    int ans = dp(str, 0);
    cout << (ans == 1e9 ? -1 : ans);

    return 0;
}
