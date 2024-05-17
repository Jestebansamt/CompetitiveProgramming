// made by Esteban Santacruz (https://github.com/Jestebansamt)

#include <bits/stdc++.h>

#define REP(i,n) for(int i = 0; i < n ; i++)
using namespace std;

int n;
vector<int> vec;
vector<int> cvec;
long long ans = 1e9 + 1, total= 0;

long long solve(int index){
    if(index >= n || cvec.size() == n - 1 ){

        long long currentSum = 0;
        for(int i: cvec) currentSum += i;

        long long current = abs((total - currentSum) - currentSum );
        ans = min(ans, current);
        
    }else{
        solve(index+1);
        cvec.push_back(vec[index]);
        
        solve(index+1);
        cvec.pop_back();
        
    }
    return ans;
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("i.txt", "r", stdin);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    vec.resize(n);
    for(auto& a: vec ){
        cin >> a;
        total += a;
    }
    
    cout << solve(0);
    return 0;
}

