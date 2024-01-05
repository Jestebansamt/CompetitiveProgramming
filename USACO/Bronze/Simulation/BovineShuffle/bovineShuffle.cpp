// made by Esteban Santacruz (@jusantacruzc)

#include <bits/stdc++.h>

using namespace std;

int main(){
	freopen("shuffle.in", "r", stdin);
	freopen("shuffle.out", "w", stdout);

    int n; cin >> n;
    vector<int> moves (n,0);
    vector<int> id(n,0); 
    vector<int> ans(n,0);
    int c = 0;

    for(int i = 0; i < n ; i++) cin >> moves[i];
    for(int i = 0; i < n ; i++) cin >> id[i];
    copy(id.begin(), id.end(), ans.begin());

    for(int i = 0; i < 3; i++){
        for(int posicion = 1; posicion <= n ; posicion++){
            for(int move = 0; move < n; move++){
                if(posicion == moves[move]){
                    (i % 2 == 0) ? ans[move] = id[posicion-1] : id[move] = ans[posicion-1];
                    break;
                }
            }
        }

    }
    
    for(int a: ans) cout << a << "\n";
    return 0;
}
