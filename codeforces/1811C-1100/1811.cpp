// made by esteban Santactruz (jusantacruzc)

#include <bits/stdc++.h>

using namespace std;

#define REP(i, a, b) for (int i = a; i < b; ++i)

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int y;
    cin >> y;

    while (y--)
    {
        int n;
        cin >> n;
        vector<int> b(n - 1), a;
        for (int i = 0; i < n - 1; i++)
            cin >> b[i];
        a.emplace_back(b[0]);
        for (int i = 0; i < n - 2; i++)
        {
            a.emplace_back(min(b[i], b[i + 1]));
        }
        a.emplace_back(b[n - 2]);
        for (auto &i : a)
            cout << i << ' ';
        cout << "\n";

    }
    return 0 ;
}

