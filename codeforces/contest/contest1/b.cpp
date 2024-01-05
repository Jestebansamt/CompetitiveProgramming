// made by Esteban Santacruz (@jusantacruzc)

#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int i = 0;
        int start = n-k;
        while(i < n){
            if(start + i <= n ){
                cout << start + i << " ";
                
            } else{
                start--;
                cout << start << " "; 
            }
            i++;
        }
        cout << "\n";
    }
    return 0;
}