//made by Esteban Santacruz (@jusantacruzc)

#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("i.txt", "r", stdin);

    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    int n; cin >> n;
    vector<pair<char, pair<int,int>>> cows;
    //<distancia que le toma para chocar, distancia que recorre el vector que para cuando choca>, <coordenadas vector con el que para>, <coordenadas current>
    vector<map<pair<int, int>, pair<pair<int,int>,pair<int,int>>>> vec(n);
    
    for(int i = 0; i < n; i++){
        char s; cin >> s;
        int j,k; cin >> j >> k;
        cows.push_back({s,{j,k}});
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != j){
                if(cows[i].first != cows[j].first ){ 
                    int difX = abs(cows[i].second.first - cows[j].second.first);
                    int difY = abs(cows[i].second.second - cows[j].second.second); 

                    if(cows[i].first == 'E' && cows[j].second.second <= cows[i].second.second && cows[i].second.first < cows[j].second.first && difX > difY){  
                        vec[i][{difX, difY}] = {{cows[j].second.first,cows[j].second.second}, {cows[i].second.first,cows[i].second.second}};                  
                    }
                    if(cows[i].first == 'N' && cows[j].second.second > cows[i].second.second && cows[i].second.first >= cows[j].second.first && difX < difY){
                        vec[i][{difY, difX}] = {{cows[j].second.first,cows[j].second.second}, {cows[i].second.first,cows[i].second.second}};
                    }
                }
            }
        }
        if(vec[i].empty()){
            vec[i][{-1, cows[i].first}] = {{-1, -1}, {cows[i].second.first,cows[i].second.second}};
        }
    }  
    
    sort(vec.begin(), vec.end());

   map<pair<int,int>, int> ans;
    for (int i = 0; i < n; i++) {
        
        auto tempMap = vec[i];
        int distancia = 0;
        pair<int,int> cordenada;
        for (const auto& it : tempMap) {
            // Caso infinito
            if(it.first.first == -1){
                ans[{it.second.second.first,it.second.second.second}] = it.first.first;
            } 
            else{
                distancia = it.first.first;
                ans[{it.second.second.first,it.second.second.second}] = distancia;
                cordenada = {it.second.second.first,it.second.second.second}; 
                
            }
            break;
        }
        for(int j = i+1; j < n; j++){
            tempMap = vec[j];
            for (const auto& it : tempMap) {
                if(it.first.first == -1){
                    break;
                }
                if(cordenada == make_pair(it.second.first.first,it.second.first.second) && distancia < it.first.second){
                    vec[j].erase(it.first);
                }
            }
        }
    }

    for (const auto& entry : cows) {
        int sol = ans[{entry.second.first ,entry.second.second}];
        cout << ((sol == -1 || sol == 0) ? "Infinity" : to_string(sol)) << "\n";
    }

    return 0;
}



   // Imprimir los datos del vector
    // for (int i = 0; i < n; ++i) {
    //     cout << "Elementos en el mapa " << i  << endl;

    //     for (auto it: vec[i]) {
    //         cout << "Distancia: (" << it.first.first << ")" << endl;
    //         cout << "Distancia recorrida por para: (" << it.first.second << ")" << endl;
    //         cout << "Para: (" << it.second.first.first << ", " << it.second.first.second << ")\n";
    //         cout << "Cordenada: (" << it.second.second.first << ", " << it.second.second.second << ")\n";
    //     }
    //     cout << endl;
    // }
    // cout << "--------------";