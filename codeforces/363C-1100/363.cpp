// made by esteban santacruz (@jusantacruzc)
#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif

    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    int minIndex = 1;
    int minValue = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        if (k - 1 >= i)
        {
            minValue += vec[i];
        }
    }
    int currentValue = minValue;
  
        for (int i = 0; i < n - k; i++)
        {
            if (currentValue - vec[i] + vec[i + k] < minValue)
            {
                minValue = currentValue - vec[i] + vec[i + k];
                minIndex = i + 2;
                currentValue = minValue;
            } else currentValue = currentValue - vec[i] + vec[i + k];
        }
        cout << minIndex;
    

    return 0;
}
