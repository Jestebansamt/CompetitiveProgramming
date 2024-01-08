// Made by Esteban Santacruz (@jusantacruzc)

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    map<pair<int, int>, int> a;
    int x = 0, y = 0, c = 1, ans = 1e9;

    for (int i = 0; i < n; i++)
    {
        char k; int j;
        cin >> k >> j;
        for (int l = 0; l < j; l++)
        {
            if(k == 'N')  y++;
            if(k == 'S')  y--;
            if(k == 'E')  x++;
            if(k == 'W')  x--;
           
            if (a[{x, y}] != 0) ans = min(ans, c - a[{x, y}]);
            a[{x, y}] = c;
            c++;
        }
    }
     cout << (ans == 1e9 ? -1 : ans);
    return 0;
}