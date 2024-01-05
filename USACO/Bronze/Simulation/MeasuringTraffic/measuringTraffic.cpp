// made by Esteban Santacruz (@jusantacruzc)

#include <bits/stdc++.h>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n ; cin >> n;

    vector<pair<string, pair<int,int>>> vec(n, {"",{0,0}});

    for(int i = 0; i < n ; i++){
        string j; cin >> vec[i].first;
        int k, l; cin >> vec[i].second.first >> vec[i].second.second;
    }

    int firstMin = 0, firstMax = 0, suMinFirst = 0, suMaxFirst = 0 ;
    bool van = true, isSame = true;
    

    int currentMax = 0, currentMin = 0, max = 101, min = -1, addMax = 0, addMin = 0;
    for(int i = 0; i < n; i++){
        currentMin = vec[i].second.first;
        currentMax = vec[i].second.second;
        if((vec[i].first == "on" || vec[i].first == "off" )  && i == 0){
            suMinFirst = currentMin;
            suMaxFirst = currentMax;
            continue;
        }
        if(vec[i].first == "on"){
            addMax+= currentMax;
            addMin+= currentMin;
        }
        else if(vec[i].first == "off"){
            addMax-= currentMin;
            addMin-= currentMax;
        }
        else{
            if(currentMin > min && currentMin < max && currentMax > min && currentMax < max ){
                min = currentMin;
                max = currentMax;
            }
            if(currentMin > min && currentMin < max){
                min = currentMin;
            }
            if(currentMax > min && currentMax < max ){
                max = currentMax;
            }
        }

        
        if(van && ((vec[i].first != "none" || i == n-1 ) && i > 0)){
            if(vec[0].first == "on"){
                firstMin = min - suMinFirst;
                firstMax = max - suMaxFirst;
                isSame = false;
            } else if(vec[0].first == "off"){
                firstMin = min + suMaxFirst;
                firstMax = max + suMinFirst;
                isSame = false;
            }
            van = false;
        }

        if(i == n-1 || vec[i].first == "none"){
            if(currentMax > min && currentMax < max ){
                max = currentMax;
            }
            if(currentMin > min && currentMin < max){
                min = currentMin;
            }
            max += addMax;
            min += addMin;
            if(isSame){
                firstMax = max;
                firstMin = min;
            }
        }
    }
    cout << firstMin << " " << firstMax <<"\n";
    cout << min << " " << max << "\n";
    return 0;
}