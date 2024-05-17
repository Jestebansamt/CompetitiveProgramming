// made by Esteban Santacruz (https://github.com/Jestebansamt)

#include <bits/stdc++.h>

using namespace std;

int solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int r = ((m/n)-1);
    if (k > 3){
        return 0;
    } else if(k == 1){
        return 1;
    }else if(k == 2){
        return min(n + r, m);
    }else{
        return max(m - (n + r), 0);
    }
    
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << "\n";
    }

    return 0;
}