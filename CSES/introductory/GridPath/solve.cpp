// made by Esteban Santacruz (https://github.com/Jestebansamt)

#include <bits/stdc++.h>

using namespace std;


queue<pair<int,int>> posibleMoves;


// U D L R
vector<pair<int,int>> moves = {{-1,0}, {1,0}, {0,1}, {0,-1}};
vector<vector<int>> visited(8, vector<int>(8,0));

void solve(pair<int,int> currentMove){
    for(auto &a : visited){
        for(auto &b : a){
            cout << b << " ";
        }
        cout << "\n";
    }
    
    while(!posibleMoves.empty()){
        for(auto& coordinates : moves){
            int newRow = coordinates.first + currentMove.first;
            int newCol = coordinates.second + currentMove.second;
            if(newRow >= 0 && newRow < 8 && newCol >= 0 && newCol < 8 && visited[newRow][newCol] == 0){
                posibleMoves.push({newRow, newCol});
                visited[posibleMoves.front().first][posibleMoves.front().second] = 1;
                posibleMoves.pop();
                solve({posibleMoves.front().first, posibleMoves.front().second});
            }
        }
    }

}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    posibleMoves.push({0, 1});
    visited[0][0] = 1;

    solve({0,0});



    return 0;
}