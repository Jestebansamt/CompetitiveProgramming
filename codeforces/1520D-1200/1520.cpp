//made by Esteban Santacruz (@jusantacruzc)
#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unordered_map<int, int> freq;
        long long count = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            count += freq[a - i];
            freq[a - i]++;
        }
        cout << count << "\n";
    }
    return 0;
}

    