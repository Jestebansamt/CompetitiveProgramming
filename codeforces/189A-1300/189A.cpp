// Made by Esteban Santacruz (@jusantacruzc)

#include <bits/stdc++.h>

using namespace std;

unordered_map<int, pair<bool, vector<int>>> memo;

pair<bool, vector<int>> cutRibbon(int targetNum, const vector<int> &numbers)
{
    if(memo.find(targetNum) != memo.end()){
        return memo[targetNum];
    }
    if (targetNum == 0)
        return {true, {}};
    if (targetNum < 0)
        return {false, {}};

    pair<bool ,vector<int>> maxCombination = {false, {}};
    for (int num : numbers)
    {
        int newTarget = targetNum - num;
        pair<bool, vector<int>> result = cutRibbon(newTarget, numbers);
        if (result.first)
        {
            result.second.push_back(num);
            pair<bool, vector<int>> combination = result ;
            if(combination.second.size() > maxCombination.second.size()){
                maxCombination= combination;
            }
            
        }
    }
    memo[targetNum] = maxCombination;
    return maxCombination;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<int> numbers = {a, b, c};

    vector<int> finalResult = cutRibbon(n, numbers).second;
    cout << finalResult.size();


    return 0;
}