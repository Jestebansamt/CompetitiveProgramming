// made by Esteban Santacruz (@jusantacruzc)

#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    int t;  cin >> t;
    for (int k = 0; k < t; k++) {

        int n;  cin >> n;
        vector<int> vec(n);
        for (int j = 0; j < n; j++) 
            cin >> vec[j];

        sort(vec.begin(), vec.end());

        int i = n - 1;
        bool van = true;
        vector<int> newV = {};
        while (van){   
            if ((vec[i] <= n && find(newV.begin(), newV.end(), vec[i]) == newV.end())){
                newV.push_back(vec[i]);
                i--;  
            }
            else{   
                if(vec[i] == 1) i--;
                else vec[i] = ceil(vec[i] / 2) ;         
            }
            if (i == -1) van = false;
        }

        sort(vec.begin(), vec.end());

        int number = 1;
        for(int a : vec){
            if(a == number) number++;
        }

        (number-1 == n) ? cout<< "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}