// made by Esteban Santacruz (@jusantacruzc)

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
     while (t--)
    {

        int n;
        
        cin >> n;
        string str;
        cin >> str;
        vector<int> vec(26,0);

        for (int i = 0; i < n; i++)
        {
           vec[int(str[i])-65] = vec[int(str[i])-65]+ 1;
        }
        int ans = 0;

        for(int i = 0; i < 26; i++){
            if(vec[i] >= i+1){
                ans++;
            }
        }
        cout << ans << "\n";
        

        
    }

    return 0;
}