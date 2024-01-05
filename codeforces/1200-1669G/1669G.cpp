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
        int n,m; cin >> n >> m;
        vector<string> vecStr(n);
        for(int i = 0; i < n; i++ ){
            cin >> vecStr[i];
        }

        vector<vector<int>> vec;
        
        for(int i = 0; i < m ; i++){
            int c = 0;
            vector<int> currentVec;
            for(int j = 0; j < n; j++){
                if(vecStr[j][i] == '*'){
                    c++;
                } else if(vecStr[j][i] == 'o'){
                    currentVec.push_back(c);
                    c=0;
                }
            }
            currentVec.push_back(c);
            vec.push_back(currentVec);
        }

        vector<string> ans;
        for(int i = 0; i < m ; i++){
            int index = vec[i].size()-1;
            string currentString = "";
            int c = vec[i][index];
            for(int j = n-1; j >= 0; j--){
                
                if(vecStr[j][i] == 'o' ){
                    index--;
                    c = vec[i][index];
                    currentString+= 'o';
                    continue;
                }

                if(c == 0){
                    currentString+= '.';
                } else{
                    currentString+= '*';
                    c--;
                }
            }
            reverse(currentString.begin(), currentString.end());
            ans.push_back(currentString);  
        }
        
        for(int i = 0; i < n ; i++){
            for(int j = 0; j < m; j++){
                 cout << ans[j][i];
            }
            cout << "\n";
        }
        cout << "\n";

    }


    return 0;
}