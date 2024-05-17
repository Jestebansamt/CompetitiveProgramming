// made by Esteban Santacruz (https://github.com/Jestebansamt)

#include <bits/stdc++.h>


using namespace std;

int main(){
    freopen("i.txt", "r", stdin);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    vector<int> vecG, vecL;
    
    for(int i = 0; i < n; i++){
        char l; int k ; cin >> l >> k;

        (l == 'G') ? vecG.push_back(k) : vecL.push_back(k);
    }

    sort(vecG.begin(), vecG.end());
    sort(vecL.begin(), vecL.end());

    int greaterLiers = 1e9, lowerLiers = 1e9, current = 1e9;
    for(int i = 0; i < vecG.size(); ++i){
        current = i + (lower_bound(vecL.begin(), vecL.end(), vecG[i]) - vecG.begin());
        current = max(0, current);
        greaterLiers = max(greaterLiers, current);
    } 

    current = vecG.size() - (lower_bound(vecG.begin(), vecG.end(), vecL[0]) - vecG.begin()); 
    lowerLiers = max(current, 0);
    current = min(greaterLiers, lowerLiers);
    
    cout << current ; 
      
    return 0;
}