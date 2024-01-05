// made by Esteban Santacruz (@jusantacruzc)
#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
    #endif
    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    int t; cin >> t ;
    while(t--){
        int n; cin >> n;
        vector<string> vec(n);
        int m = 0;
        int ans = 0;
        for(int i = 0; i < n; i++) cin >> vec[i];
        for(int i = 0; i < n/2; i++){
            for(int j = 0; j < n/2; j++){
                    m = max(max(int(vec[i][j]), int(vec[j][n-1-i])), max(int(vec[n-1-i][n-1-j]), int(vec[n-1-j][i])));
                    ans += (m - int(vec[i][j]));
                    ans += (m - int(vec[j][n-1-i]));
                    ans += (m - int(vec[n-1-i][n-1-j]));
                    ans += (m - int(vec[n-1-j][i]));
                    
            }
        }
        cout << ans << "\n";
    }
    return 0;
}