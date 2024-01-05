//made by Esteban Santacruz (@jusantacruzc)

#include <bits/stdc++.h>
using namespace std;
int n;
int add = 1;
vector<vector<int>> memo(2, vector<int>(4, -1));

int main(){
    #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        cin >> n;
        vector<int> vec1(n);
        vector<int> vec2(n);
        for(int i = 0; i < n; i++) cin >> vec1[i];
        for(int i = 0; i < n; i++) cin >> vec2[i];
        
        vector<vector<int>> dpMin(2, vector<int>(n,0));  
        vector<vector<int>> pathMin(2, vector<int>(n,0)); 


        dpMin[0][0] = vec1[0];   
        pathMin[0][0] = vec1[0];

        for(int i = 1; i < n; i++) dpMin[0][i] = dpMin[0][i-1] + vec1[i];
        

        dpMin[1][0] = vec2[0] + vec1[0];
        
        for(int j = 1; j < n ; j++){    
            dpMin[1][j] = min(dpMin[0][j] + vec2[j], dpMin[1][j-1] + vec2[j]);
            if(dpMin[0][j] > dpMin[1][j-1] ){
                pathMin[1][j-1] = dpMin[1][j-1]; 
            } else{
               pathMin[0][j] = dpMin[0][j];
            }
            
        }
        pathMin[1][n-1] = dpMin[1][n-1];
        

        vector<vector<int>> dpMax(2, vector<int>(n,0)); 
        vector<vector<int>> pathMax(2, vector<int>(n,0)); 
        vector<int> newVec1(n);
        vector<int> newVec2(n);

        for(int i = 0; i < vec1.size(); i++){
            (pathMin[0][i] == 0) ? newVec1[i] = 0 :  newVec1[i] = vec1[i];
            (pathMin[1][i] == 0) ? newVec2[i] = 0 :  newVec2[i] = vec2[i];
        }

        dpMax[0][0] = vec1[0];
        pathMax[0][0] = vec1[0];

        for(int i = 1; i < n; i++) dpMax[0][i] = dpMax[0][i-1] + vec1[i];

        dpMax[1][0] = vec2[0] + vec1[0];

        for(int j = 1; j < n ; j++){    
            dpMax[1][j] = max
            (dpMax[0][j] + vec2[j], dpMax[1][j-1] + vec2[j]);
            if(dpMin[0][j] < dpMin[1][j-1] ){
                pathMax[1][j-1] = dpMin[1][j-1]; 
            } else{
            pathMax[0][j] = dpMin[0][j];
            }
        }

        pathMax[1][n-1] = dpMax[1][n-1];

        for(int i =0 ; i < 2 ; i++){
            for(int j = 0; j < n; j ++){
                cout << pathMin[i][j] << " ";
            }
            cout << "\n";
        }
        int ans = 0;
        for(int i =0 ; i < 2 ; i++){
            for(int j = 0; j < n; j ++){
                if(pathMax[i][j] != 0 && pathMin[i][j] == 0 ) ans += (i == 0 ) ? vec1[j] : vec2[j];
            }
        }
        //cout << ans << "\n";
    }
    
   
        
    
    return 0;
}