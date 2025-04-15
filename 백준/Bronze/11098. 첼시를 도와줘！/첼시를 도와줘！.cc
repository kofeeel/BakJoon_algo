#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    int n{}, p{};
    long long price{};  // 2*10^9 
    string name;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        map<long long, string> playerlist;
        cin >> p;
        
        for (int j = 0; j < p; j++)
        {
            cin >> price >> name;
            playerlist[price] = name;  // 가격과 이름 매핑
        }

        // 맵은 정렬되있어서 마지막선수가 가장비쌈
        auto max_player = playerlist.rbegin();
        cout << max_player->second << endl;
    }
    return 0;
}