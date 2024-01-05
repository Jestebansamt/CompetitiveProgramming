//made by Esteban Santacruz (@jestebansant)

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
        string str; cin >> str;
        string higher = "1";
        string lower = "1";
        bool isHigher = false;

        for(int i = 1; i < n; i++){
            if(!isHigher){
                if(str[i] == '1' ){
                    higher += '1';
                    lower += '0';
                    isHigher = true;
                } else{
                    higher += to_string((str[i] - '0')/2);
                    lower += to_string((str[i] - '0')/2);
                } 
            } else{
                if(str[i] == '0' ) {
                    higher += '0';
                    lower += '0';
                }
                else{
                    higher += '0';
                    lower += str[i];
                }
            }
        }
        cout << higher << endl << lower << endl;
    }

    return 0;
}