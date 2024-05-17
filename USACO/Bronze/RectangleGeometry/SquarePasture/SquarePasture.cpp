// made by Esteban Santacruz (@jusantacruzc)

#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("i.txt", "r", stdin);


    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    vector<int> vec(8);
    int maxX = 0, minX = 1e9, maxY = 0, minY = 1e9;
    for(int i = 0; i < 8; i++){
        cin >> vec[i];
        if(i % 2 == 0){
            maxX = max(maxX, vec[i]);
            minX = min(minX, vec[i]);
        } else{
            maxY = max(maxY, vec[i]);
            minY = min(minY, vec[i]);
        }
    }

 
    
    cout << pow(max(maxX-minX, maxY- minY),2);
    return 0;
}