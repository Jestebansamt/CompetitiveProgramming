// made by Esteban Santacruz (@jusantacruzc)

#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
    #endif 

    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> vec(n);
        for(int i = 0; i< n ; i++) cin >> vec[i];
        int fp=n-1, ip = 0;
        int minValue = 1, maxValue = n;
        int ans = 0;

        for(int i =0; i <n; i++){
            if(fp <= ip){
                ans = -1;
                break;
            }
            if(vec[ip] == minValue  ){
                ip++;
                minValue++;
            }else if(vec[ip] == maxValue){
                maxValue--;
                ip++;
            }else if(vec[fp] == minValue){
                fp--;
                minValue++;
            }else if(vec[fp] == maxValue){
                maxValue--;
                fp--;
            }else{
                break;
            }
        }
        (ans == -1) ? cout << ans: cout << ip+1 << " " << fp+1;
        cout << "\n";
    }

    return 0;
}