// made by Esteban Santacruz (@jusantacruzc)

#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE    
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    int oo = -1e9;

    while(t--){
        int countMax = 1;
        int currentCount = 1;
        int n; cin >> n;
        vector<long long> vec(n);
        bool isNegative = false;

        for(int i =0; i < n ; i++){
            cin >> vec[i];
            if(i == 0){
                (vec[i] < 0) ? isNegative = true : isNegative = false;
            }
               
            if(isNegative && vec[i] > 0){
                currentCount++;
                isNegative = false;
            }else if(isNegative == false && vec[i] < 0){
                currentCount++;
                isNegative = true;  
            }
            if(currentCount > countMax){
                countMax = currentCount;     
            }

            (vec[i] < 0) ? isNegative = true : isNegative = false;
        }

        
        long long sum = 0;
        long long max = 0;

        for(int i = 0; i < n; i++ ){
            if(i==0){
                max = vec[i];        
            } else if(vec[i] > 0 && vec[i-1] < 0 || vec[i] < 0 && vec[i-1] > 0){
                sum += max;
                max = vec[i];
            }
             if(vec[i] > max){
                max = vec[i]; 
            }

            if(i == n-1){
                sum += max;
            }

        }

        cout << sum << "\n";
    }


    return 0;
}