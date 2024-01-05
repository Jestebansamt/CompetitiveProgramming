// made by Esteban Satnacruz (@jusantacruzc)

#include <bits/stdc++.h>

using namespace std;

#define REP(i, a, b) for (int i = a; i < b; i++)

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    vector<vector<int>> matriz = {{1, 0, 0}, {0, 1, 0}, {0, 0, 0}};
    bool van = true;
    REP(i,0, matriz.size()) {
        REP(j,0,matriz.size()) {
            if ( matriz[i][j]) {
                REP(k,0,matriz.size()) {
                    if ( matriz[j][k] && !matriz[i][k]) {
                        van = false;
                    }
                }
            }
        }  
    }

    cout << (van ? "Es transitiva" : "No es transitiva") << endl;

    return 0;
}
