// made by Esteban Santacruz (@jusantacruzc)

#include <bits/stdc++.h>
using namespace std;



 

int main(){
    int t = 28;

    set<int> s;
    vector<int> currentn;
    currentn.push_back(t);
    int c = 0;
    while(currentn.size() > 0 || c > 10){
        if(currentn.back() <= 1  ){
            currentn.erase(currentn.begin() + currentn.size()-1);
        }
        else if(currentn.back() % 2 == 0){
             currentn.push_back(currentn.back()/2);
             cout << currentn.back() << " ";
             s.insert(currentn.back()/2);
             currentn.erase(currentn.begin() + currentn.size()-2);
        }
        c++;
    } 

    for(int a : s){
        cout << a << " ";
    }
    

    return 0;

}
