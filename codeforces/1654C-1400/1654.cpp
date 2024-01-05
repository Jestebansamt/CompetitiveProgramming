// made by Esteban Santacruz (@jusantacruzc)

#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; i++)

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> vec(n);
        REP(i, 0, n)
        {
            cin >> vec[i];
        }
        sort(vec.begin(), vec.end());
        if (n == 1 || vec[0] == 1 && vec[vec.size() - 1] == 1)
        {
            cout << "YES"
                 << "\n";
            continue;
        }
        else if (n == 2)
        {
            if (vec[0] + 1 == vec[1] || vec[0] - 1 == vec[1] || vec[0] == vec[1])
            {
                cout << "YES"
                     << "\n";
            }
            else
            {
                cout << "NO"
                     << "\n";
            }
        }
        else
        {
            vector<long long> sum;
            vector<long long> temporalSum;
            sum.push_back(vec[0] + vec[1]);

            REP(i, 2, n)
            {

                if (vec[i] + 1 == sum.back() || vec[i] - 1 == sum.back() || vec[i] == sum.back())
                {
                    sum.push_back(vec[i] + sum.back());
                    sum.erase(sum.begin() + sum.size() - 2);
                    for (int a : sum)
                    {
                        cout << a << " ";
                    }
                    cout << "\n";
                    if (sum.size() >= 2)
                    {
                        for (int g = sum.size() - 1; g >= 1; g--)
                        {
                            if (sum[g - 1] + 1 == sum[g] || sum[g - 1] - 1 == sum[g] | sum[g - 1] == sum[g])
                            {
                                sum.push_back(sum[g - 1] + sum[g]);
                                sum.erase(sum.begin() + sum.size() - 2);
                                sum.erase(sum.begin() + sum.size() - 2);
                            }
                            for (int a : sum)
                            {
                                cout << a << " ";
                            }
                            cout << "\n";
                        }
                    }
                }
                else
                {
                    sum.push_back(vec[i]);
                    for (int a : sum)
                    {
                        cout << a << " ";
                    }
                    cout << "\n";
                }
            }

            if ((sum.size() == 2 && (sum[0] != sum.back() && sum[0] - 1 != sum.back() && sum[0] + 1 != sum.back())) || sum.size() > 2)
            {
                cout << "NO"
                     << "\n";
            }
            else
            {
                cout << "YES"
                     << "\n";
            }
        }
    }

    return 0;
}