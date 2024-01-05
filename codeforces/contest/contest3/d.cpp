#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif
    string str;
    getline(cin, str);

    string newstr = str;
    size_t size1 = 0;
    size_t size2 = newstr.length();

    while (newstr.length() >= 3 && size1 != size2) {
        size1 = newstr.length();
        newstr = newstr.find("ABC") != string::npos ? newstr.erase(newstr.find("ABC"), 3) : newstr;
        size2 = newstr.length();
    }

    cout << newstr << endl;

    return 0;
}




