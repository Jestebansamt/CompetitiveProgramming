// made by Esteban Santacruz (@jusantacruzc)

#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
    #endif

    int n; cin >> n;
    vector<int> moves(n,0), id(n,0), ans(n,0);

    for(int i = 0; i < n ; i++) cin >> moves[i];
    for(int i = 0; i < n ; i++) cin >> id[i];
    copy(id.begin(), id.end(), ans.begin());

    for(int i = 0; i < 4; i++){
        for(int move = 0; move < n; move++){ 
            ans[moves[move]-1] = id[moves[move]-1] ;
        }
        for(int j = 0; j < n ; j++){
            id[j] = ans[moves[j]-1];
        }
    }

    for(int a: ans) cout << a << "\n";
    return 0;
}
