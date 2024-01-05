//made by Esteban Santacruz (jusantacruzc)
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    #ifndef ONLINE_JUDGE    
        freopen("input.txt", "r" , stdin);
    #endif
 
    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);
 
    int n; cin >> n ;
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin>> vec[i];
    }
    sort(vec.begin(), vec.end());
   
    int q; cin >> q;
 
    for(int i = 0; i < q; i++){
        int j; cin >> j;
        int left = 0;
        int right = n-1;
        int result = 0;
        while(left <= right){
            int mid = left + (right) / 2;
 
            (vec[mid] > j) ? right = mid - 1 :  left = mid + 1;

            if(j >= vec[mid]) result = mid + 1;           
        }
        cout << result << endl; 
 
    }
    return 0;
}