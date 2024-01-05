// Made by Esteban Santacruz (@jusantacruzc)

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

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int contador = 0;
        int contadorFinal = 0;
        for (int j = 0; j < n; j++)
        {
            int k;
            cin >> k;
             if (k % 3 == 0)
            {
                contadorFinal++;
            }
            else if (contador % 3 == 0 && contador != 0)
            {
                contadorFinal++;
                contador = 0;
            }
            else
            {
                contador += k;
            }
        }
        cout << contadorFinal << endl;
    }

    return 0;
}