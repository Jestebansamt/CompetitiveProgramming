//made by Esteban Santacruzc  (@jusantacruzc)

#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("i.txt", "r", stdin);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string str, t; cin >> str >> t;
    string c;

    for(int i = 0; i < str.size(); i++){
        c+= str[i];
        if(c.size() >= t.size() && c.substr(c.size() - t.size()) == t ){
            c.erase(c.end() - t.size(), c.end());
        }
    }
   
    cout << c;
    return 0;
}