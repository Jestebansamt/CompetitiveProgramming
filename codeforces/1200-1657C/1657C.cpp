// made by Esteban Santacruz (@jusantacruzc)

#include <bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t ;
    while(t--){
        int n; cin >> n;
        string str; cin >> str;
        int c = 0, r = 0, ob = 0, cb = 0;
        int co = 0;
        bool van = false;


        for(int i = 0; i < n ; i++){
            r++;
            if(van ){
                c++;
                r = 0;
                van = false;
                co = 0;
                continue;
            }
            if(co == 0){
                (str[i] == ')') ? co++ : van = true; 
            } else if(str[i] == '('){
                c++;
                r = 0;
                van = false;
                co = 0;
                continue;
            }
            
            
        }
        cout << c << " " << r << "\n";

    }

    return 0;
}