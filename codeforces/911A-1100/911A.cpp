// Made by Esteban Santacruz

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

    int repeticiones;
    cin >> repeticiones;
    vector<int> vec;
    long long menor = 100000000000009;
    for (int i = 0; i < repeticiones; i++)
    {
        int j;
        cin >> j;
        vec.push_back(j);
        if (menor > j)
        {
            menor = j;
        }
    }

    vector<int> menorV;
    int distancia = 1;
    bool van = false;
    for (int i = 0; i < repeticiones; i++)
    {
        if (vec[i] == menor && van == false)
        {

            van = true;
        }
        else if (vec[i] == menor && van)
        {

            menorV.push_back(distancia);
            distancia = 1;
        }
        else if (van)
        {
            distancia++;
        }
    }
    long long menorDistancia = 100000000000009;
    for (int i = 0; i < menorV.size(); i++)
    {

        if (menorV[i] < menorDistancia)
        {

            menorDistancia = menorV[i];
        }
    }

    cout << menorDistancia;

    return 0;
}