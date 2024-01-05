// made by esteban Santacruz (jusantacruzc)
#include <bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(int i = a; i < b; i++)

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> vec(n);

        REP(i,0,n){
            cin >> vec[i];
        }

        sort(vec.begin(), vec.end());

        vector<vector<int>> vecB;
        vector<int> currentVec;
        
        int c = 1;
        REP(i,1,n){

            if(vec[i] == vec[i-1]) c++;
            else{
                currentVec.push_back(c);
                c = 1;
            }

            if(vec[i] - vec[i-1] > 1){
                vecB.push_back(currentVec);
                currentVec.clear();
            }
        }
        currentVec.push_back(c);
        vecB.push_back(currentVec);

        long long ans = 0;
        REP(i,0,vecB.size()){
            long long currentRest = 0;
            if(vecB[i].size() > 1){
                for(int j = vecB[i].size()-2; j >= 0; j--){
                    if(j == vecB[i].size()-2)currentRest += vecB[i][j+1];
                    currentRest += max(0, vecB[i][j] - vecB[i][j+1] );
                }
                ans+= currentRest;
            } else {
                ans += vecB[i][0];
            }
        }
        cout << ans << "\n";
        
    }
    return 0;
}



