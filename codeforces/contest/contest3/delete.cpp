//made by Esteban Santracruz (@jusantacruzc)

#include <bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i = a; i < b; i++)

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    string str; cin >> str;
    int m; cin >> m;
    vector<int> a(str.length(),0);
    int k = 0;
    REP(i, 1 , str.length()){
        if(str[i] == str[i-1]) k++;
        a[i] += k;
    }

    while(m--){
        int l, r; cin >> l >> r;

        cout <<a[r-1] - a[l-1] << "\n";
        
    } 
    return 0;
}