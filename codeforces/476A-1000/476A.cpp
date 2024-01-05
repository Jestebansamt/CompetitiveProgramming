#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    int d = 0;

    d = (n % 2 == 1) ? (n +1) /2 : n / 2;

    if(m >= d && n > m || n == m ) cout << m;
    else if(d % m == 0) cout << d;
    else if(m < d) cout << m-(d % m) + d;
    else cout << -1;

    return 0;
}