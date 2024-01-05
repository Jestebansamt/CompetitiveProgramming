// made by Esteban Santacruz (@jusantacruzc)

#include <bits/stdc++.h>
using namespace std;

int main(){
    // freopen("speeding.in", "r", stdin);
	// freopen("speeding.out", "w", stdout);
    #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
    #endif
    
    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    int n,m; cin >>n >> m;
    vector<pair<int,int>> nx(n+1, {0,0});
    vector<pair<int,int>> mx(m+1, {0,0});

    
    for(int i = 1 ; i < n+1; i++){
        int j; cin >> j;
        cin >> nx[i].second;
        nx[i].first = j + nx[i-1].first;
    }
    for(int i = 1; i < m+1; i++){
        int j; cin >> j;
        cin >> mx[i].second;
        mx[i].first = j + mx[i-1].first;
    }
    
    int ans = 0;
    int j = 1;
    int k = 1;

    bool van = true; 
    while(van){
        if(mx[j].first == nx[k].first && mx[j].first == 100) van = false;
        if(mx[j].second > nx[k].second) ans = max(ans, mx[j].second - nx[k].second );
        if(mx[j].first > nx[k].first){
            k++;
        } else if(mx[j].first < nx[k].first){
            j++;
        } else{
            k++;
            j++;
        }
    }
    
    cout << ans;



    return 0;
}
