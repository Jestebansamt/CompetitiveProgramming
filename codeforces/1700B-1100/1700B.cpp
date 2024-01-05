//made by Esteban Santacruz (@jusantacruzc)

#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        int number; cin >> number;
        int result = ((1*pow(10, n))+1) - number;
        if(result == 2){
            string str= "";
            for(int i = 0; i < n; i++) str+= "1";
            result += stoi(str) - 1; 
        }
            cout << result << endl;
        
        
    }

    return 0;
}