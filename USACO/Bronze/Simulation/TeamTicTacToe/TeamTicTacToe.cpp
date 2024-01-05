//made by Esteban Santacruz (@jusantacruzc)

#include <bits/stdc++.h>
using namespace std;


int one = 0, two = 0;
vector<int> vec(26,0), vec2(26,0);

void countDiff(){
    for(int i = 0; i < 26; i++){
        cout << vec[i] << " ";
        if(vec[i] == 2 && vec2[i] == 0) vec2[i] = 2;
        else if(vec[i] == 3 && vec2[i] == 0) vec2[i] = 1;
    }
    cout << "\n";
    fill(vec.begin(), vec.end(), 0);
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    vector<string> v(3);

    for(int i = 0; i < 3; i++){
        cin >> v[i];
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            vec[int(v[i][j]) - 65]++; 
        }
        countDiff();
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            vec[int(v[j][i]) - 65]++; 
        }
        countDiff();
    }

    for(int i = 0; i < 3; i++){
        vec[int(v[i][i]) - 65]++; 
    }
    countDiff();

    for(int i = 0; i < 3; i++){
        vec[int(v[i][2-i]) - 65]++; 
    }

    countDiff();

    for(int a: vec2){
        if(a == 2) two++;
        else if( a == 1) one++;
    }
    cout << one << "\n" << two << "\n";

    return 0;
}