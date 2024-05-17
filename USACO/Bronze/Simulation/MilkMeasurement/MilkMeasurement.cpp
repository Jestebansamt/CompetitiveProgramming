// made by Esteban Santacru (@jusantacruzc)

#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("i.txt", "r", stdin);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    vector<pair<string ,int>> vec(101);

    while(n--){
        int j;
        string k, l; 
        cin >> j >> k >> l;
        vec[j].first = k;
        if(l[0] == '+') l.erase(0,1);
        vec[j].second = stoi(l);
    }
    
    int ans = 0, b = 7, m = 7, e = 7;
    string currentVan = "000", van = "000";

    for(int i = 0; i < 101; i++){
        if(vec[i].first != ""){
            vector<pair<int,string>> sortP(3);
            
            if(vec[i].first == "Mildred") m+= vec[i].second;
            if(vec[i].first == "Elsie") e+= vec[i].second;
            if(vec[i].first == "Bessie") b+= vec[i].second;
            
            sortP[0].first = m;
            sortP[0].second = "Mildred";
            sortP[1].first = e;
            sortP[1].second = "Elsie";
            sortP[2].first = b;
            sortP[2].second = "Bessie";


            sort(sortP.begin(), sortP.end());

            if(sortP[2].first == sortP[0].first) currentVan = "111";
            else if(sortP[2].first == sortP[1].first){
                if(sortP[2].second == "Mildred" && sortP[1].second == "Elsie") currentVan = "110";
                else if(sortP[2].second == "Elsie" && sortP[1].second == "Bessie") currentVan = "011";
                else if(sortP[2].second == "Mildred" && sortP[1].second == "Bessie") currentVan = "101";
            }
            else if(sortP[2].second == "Mildred") currentVan = "100";
            else if(sortP[2].second == "Elsie") currentVan = "010";
            else if(sortP[2].second == "Bessie") currentVan = "001";
            if(currentVan != van)ans++;
            van = currentVan;
        }
    }

    cout << ans;

    return 0;
}