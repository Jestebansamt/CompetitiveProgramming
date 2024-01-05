//made by Esteban Santacruz(@jusantacruzc)

#include <bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(int i = a; i < b; i++)

bool van = false;
map<int, int> memo;


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    vector<int> storage;
    REP(i,0,100){
        storage.push_back(11*i);
        storage.push_back(11*i+111);
        storage.push_back(11*i+111*i);
    }
    sort(storage.begin(), storage.end());
    for(int a: storage){
        cout << a << " "; 
    }

    
    return 0;
}