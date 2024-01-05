// made by Esteban Santacruz (@jusantacruzc)
#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    string str; cin >> str;
    str = str.substr(1, str.size() - 1 );
    string substr = "";
    bool negative = false; 
    bool equal = false;
    int countX1 = 0;
    int countX2 = 0;
    int countN1 = 0;
    int countN2 = 0;

    for(int i = 0; i < str.size(); i++){
        if(equal = false){
            if(str[i] = '='){
                equal = true;
                substr = "";
                continue;
            }
            if(str[i] == 0 && str[i] == '-'){
                negative = true;
            } else if(str[i] == 0 && str[i] == '+') {
                negative = false;
            }

            if(str[i] != '+' && str[i] != '-' ){
                substr += str[i];
            } else{
                if(str[i] == '-'){
                    negative = true;
                } else if(str[i] == '+'){
                    negative = false;
                }

                if(substr.find('x') != string::npos){
                    if (substr == "x"){
                        negative ? countX1 -= 1 :
                        countX1 += 1;
                    } else{
                        cout << substr << endl;
                        // substr.substr(0, substr.size() - 1);
                        // negative ? countX1 -= stoi(substr) :
                        // countX1 += stoi(substr);
                    }
                } else{
                    cout << substr << endl;
                    // negative ? countN1 -= stoi(substr):
                    // countN1 += stoi(substr);
                }
                substr = "";

            }
        } else{
            if(str[i] == 0 && str[i] == '-'){
                negative = true;
            } else if(str[i] == 0 && str[i] == '+') {
                negative = false;
            }

            if(str[i] != '+' && str[i] != '-'){
                substr += str[i];
            } else{
                if(str[i] == '-'){
                    negative = true;
                } else if(str[i] == '+'){
                    negative = false;
                }

                if(substr.find('x') != string::npos){
                    if (substr == "x"){
                        negative ? countX2 -= 1 :
                        countX2 += 1;
                    } else{
                        cout << substr << endl;
                        // substr.substr(0, substr.size() - 1);
                        // negative ? countX2 -= stoi(substr) :
                        // countX2 += stoi( substr);
                    }
                   
                } else{
                    cout << substr << endl;
                    // negative ? countN2 -= stoi(substr) :
                    // countN2 += stoi(substr);
                }
                substr = "";
            }
        }
    }

    cout << countX1 << "x " << countN1 << "=" << countX2 << "x " << countN2 << endl;
    return 0;
}