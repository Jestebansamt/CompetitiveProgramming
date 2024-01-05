// made by Esteban Santacruz (@jusantacruzc)

#include <bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(int i = a; i < b; i++)


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> vec(n, 0 );
        REP(i,0,n) cin >> vec[i];

        bool van = true;
        int min = 1, max = n;
        int begin = 0, end = n-1;
        while(van){
            if(vec[begin] != max && vec[end] != max && vec[begin] != min && vec[end] != min ){
                van = false;
            }
            if(vec[begin] == min || vec[end] == min ){
                (vec[begin] == min) ? begin++ : end--;
                min++;
            } 
            if(vec[begin] == max || vec[end] == max ){
                (vec[begin] == max) ? begin++ : end--;
                max--;  

            }  
            if(min == max || max == 0 || min == n+1){
                van = false;
            }
            
        }

        (min == max || max == 0 || min == n+1 ) ? cout << -1 : cout << min << " " << max;
        cout << "\n";

    }


    return 0;
}