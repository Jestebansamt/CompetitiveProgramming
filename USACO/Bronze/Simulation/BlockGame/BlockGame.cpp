//made by Esteban Santacruz (@jusantacruzc)

#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    vector<int> ans(26,0);

    for(int i = 0; i < n ; i++){
        string str1 = "", str2 = "";
        cin >> str1 >> str2;
        vector<int> vec1(26, 0), vec2(26, 0);

        for(int j = 0; j < str1.size(); j++) vec1[int(str1[j]) - 97]++;
        for(int j = 0; j < str2.size(); j++) vec2[int(str2[j]) - 97]++;

        for(int j = 0; j < 26; j++) ans[j] += max(vec1[j], vec2[j]);
        
    }
    for(int a : ans) cout << a << "\n";

    
    return 0;
}