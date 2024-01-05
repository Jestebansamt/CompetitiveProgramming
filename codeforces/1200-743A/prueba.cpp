//made by Esteban Santacruz (@jusantacruzc)

#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> vec1(n);
        vector<int> vec2(n);
        for(int i = 0; i < n; i++) cin >> vec1[i];
        for(int i = 0; i < n; i++) cin >> vec2[i];

        if(n > 1){
            vector<int> dp1(n-1);
            dp1[0] = vec1[n-1];
            vector<int> dp2(n-1);
            dp2[0] = vec2[0];

            for(int i = 1; i < n-1; i++) dp1[i] = dp1[i-1] + vec1[n-(i+1)]; 
            for(int i = 0; i < n-1; i++) dp2[i+1] = dp2[i] + vec2[i+1]; 
            

            for(int i = n-2; i >= 0; i--) cout << dp1[i] << " ";
            cout << "\n";
            for(int i = n-2; i >= 0; i--) cout <<  dp2[n-2-i] << " ";


            for(int i = n-2; i >= 0; i--){
                cout <<dp1[i] << " "<<  dp2[n-2-i] << "\n";
                if(dp1[i] == dp2[n-2-i]){
                   
                    cout << dp1[i+1] << "\n";
                    break;
                }
                if(dp1[i] < dp2[n-2-i] ){
                     
                    cout <<  dp2[n-3-i] << "\n";
                    break;
                } 
                if(i == 0) cout << dp2[n-2-i] << "\n";   
            }
        } else {
            cout << 0 << "\n";
        }
       
    }
    
    return 0;
}