// made by Esteban Santacruz (@jusantacruzc)


#include <bits/stdc++.h>
using namespace std;

vector<long long> sum;
vector<int> subset;
int n;
vector<int> vec;
 
int dp(int index, int k, int m, vector<int>& vec){
    if(index+1 == n) return 0;
    int ans = 0;
    ans = dp(index+1, k+vec[index], m, vec) - dp(index+1, k , m+vec[index], vec);
    return ans;
   
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    vector<int> vec(n);

    for(int i = 0; i < n; i++) cin >> vec[i];
    cout << dp(0, 0, 0, vec);
    

    return 0;
}