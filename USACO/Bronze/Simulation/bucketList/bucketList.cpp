// made by Esteban Santacruz (@jusantacruzc)

#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("blist.in", "r", stdin);
	freopen("blist.out", "w", stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    const int N = 1007;
    int n; cin >> n;
    vector<int> buckets(N,0);

    for(int i = 0; i < n; i++){
        int r, t, s ; cin >> r >> t >> s;
        buckets[r] += s;
        buckets[t] += -s;
    }

    int ans = 0, rest = 0;
    for(int i = 0; i < N; i++){
        if(buckets[i] < 0) rest += buckets[i];
        if(buckets[i] > 0){ 
            ans+= max(0, buckets[i] + rest);
            rest = min(0, rest + buckets[i]);
        }
    }
    cout << ans;
    return 0;
}
