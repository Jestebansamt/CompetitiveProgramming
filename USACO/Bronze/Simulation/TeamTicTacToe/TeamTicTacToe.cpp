//made by Esteban Santacruz (@jusantacruzc)

#include <bits/stdc++.h>
using namespace std;

set<set<char>> s; 
set<char> c;
set<char> b;
set<char> d;
set<char> a;

void countDiff2(){
    s.insert(d);
    s.insert(c);
}

void countDiff(){
    s.insert(a);
    s.insert(b);
    a.clear();
    b.clear();
}

int main(){
    
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    vector<string> v(3);
    int one = 0, two = 0;

    for(int i = 0; i < 3; i++){
        cin >> v[i];
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            a.insert(v[i][j]);
            b.insert(v[j][i]); 
        }
        countDiff();
        c.insert(v[i][i]);
        d.insert(v[i][2-i]);    
    }
    countDiff2();

    for(const auto& a : s){
        if(a.size() == 1) one++;
        if(a.size() == 2) two++;
    }
    
    cout << one << "\n" << two;
    return 0;
}