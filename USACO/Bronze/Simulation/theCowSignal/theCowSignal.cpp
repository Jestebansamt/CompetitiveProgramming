// made by Esteban Santacruz (@jusantacruzc)

#include <bits/stdc++.h>
using namespace std;


int main(){
    freopen("cowsignal.in", "r", stdin);
	freopen("cowsignal.out", "w", stdout);


    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    int a , b , c; cin >> a >> b >> c;
    vector<string> str(a);
    for(int i = 0; i < a; i++ ) cin >> str[i];
    vector<string> ans;
    
    for(int i = 0; i < a*c; i++){
        for(int j = 0; j < b*c; j++){
            cout << str[int(i/c)][int(j/c)] << "";
        }
        cout << "\n";
    }
   
    return 0;
}