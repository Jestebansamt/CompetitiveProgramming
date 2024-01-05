//made by Esteban Santacruz (jusantacruzc)

#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int c0 = 0, c1 = 0;
        int first0 = -1, last1 = -1;
        
        vector<int> vec;
        for(int i = 0; i < n; i++){
            int j; cin >> j;
            if (j == 0) {
                c0++;
                if(first0 == -1 ){
                    first0 = i;
                }
            } else{ 
                c1++;
                last1 = i;
            }
            vec.push_back(j);
        }
        long long total = 0, total2 = 0,total3 = 0, newC0 = c0+1, newC02 = c0;

        for(int a : vec) (a == 0) ? newC02-- : total3+= newC02;

        if(last1 != -1) vec[last1] = 0;
        for(int a : vec) (a == 0) ? newC0-- : total+= newC0;

        if(last1 != -1) vec[last1] = 1;

        if(first0 != -1){ 
            vec[first0] = 1;
            c0--;
        }

        for(int a : vec) (a == 0) ? c0-- : total2+= c0;
        cout << max(max(total,total2),total3) << endl;
    }
    return 0;
}