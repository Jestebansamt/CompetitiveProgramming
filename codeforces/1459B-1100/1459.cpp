// made by Esteban Santacruz (@jusantacurzc)

#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> moves = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
set<pair<int, int>> coordinates = {};

pair<pair<int, int>, int> moveTurn(pair<int, int> currentCoordinate, int move, int totalMove)
{
    if (move == 0)
        return {{}, 0};

    if (currentCoordinate == make_pair(0, 0))
    {

        for (int i = 0; i < moves.size(); i++)
        {
            pair<int, int> newCoordinate = {currentCoordinate.first + moves[i].first, currentCoordinate.second + moves[i].second};
            coordinates.insert(newCoordinate);
            moveTurn(newCoordinate, move - 1, totalMove + 1);
        }
    }
    else
    {

        if (totalMove % 2 != 0 || currentCoordinate.first == 0)
        {
            for (int i = 0; i < 2; i++)
            {
                pair<int, int> newCoordinate = {currentCoordinate.first + moves[i].first, currentCoordinate.second + moves[i].second};
                coordinates.insert(newCoordinate);
                cout << totalMove << newCoordinate.first << " " << newCoordinate.second << " " << totalMove << endl;
                moveTurn(newCoordinate, move - 1, totalMove + 1);
            }
        }
        else
        {
        
            for (int i = 2; i < 4; i++)
            {
                pair<int, int> newCoordinate = {currentCoordinate.first + moves[i].first, currentCoordinate.second + moves[i].second};
                coordinates.insert(newCoordinate);
                cout << totalMove<< " " << newCoordinate.first << " " << newCoordinate.second << endl;
                moveTurn(newCoordinate, move - 1, totalMove + 1);
            }
        }
    }
    return {{}, 0};
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    moveTurn({0, 0}, n, 0);
    for (pair<int, int> coordinate : coordinates)
    {
        cout << coordinate.first << " " << coordinate.second << endl;
    }

    return 0;
}
