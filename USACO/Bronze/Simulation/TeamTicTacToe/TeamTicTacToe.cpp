//made by Esteban Santacruz (@jusantacruzc)

#include <bits/stdc++.h>
using namespace std;

set<set<char>> s; 
set<char> c;

void countDiff(){
    s.insert(c);
    c.clear();
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    vector<string> v(3);
    int one = 0, two = 0;

    for(int i = 0; i < 3; i++){
        cin >> v[i];
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            c.insert(v[i][j]); 
        }
        countDiff();
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            c.insert(v[j][i]); 
        }
        countDiff();
    }

    for(int i = 0; i < 3; i++){
        c.insert(v[i][i]); 
    }
    countDiff();

    for(int i = 0; i < 3; i++){
        c.insert(v[i][2-i]); 
    }
    countDiff();

    for(const auto& a : s){
        if(a.size() == 1) one++;
        if(a.size() == 2) two++;
    }

    cout << one << "\n" << two;

    return 0;
}