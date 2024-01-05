//made by Esteban Santacruz (@jusantacruzc)

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
        vector<int> num(n);
        for(int i = 0; i < n; i++){
            cin>> num[i];
        }
        sort(num.begin(), num.end());

        long long a = 0, b = 0;
        int counter = 0;
        for(int i = n-1; i >= 0; i--){
            if(counter % 2 == 0 && num[i] % 2 == 0){
                a+=num[i];
            } else if(counter % 2 == 1 && num[i] % 2 == 1) {
                b+=num[i];
            }
            counter++;
        }

        if(a > b){
            cout << "Alice" << endl;
        } else if(b > a){
            cout << "Bob" << endl;
        } else{
            cout << "Tie" << endl;
        }

    }



    return 0;
}