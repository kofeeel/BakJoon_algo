#include <iostream>
#include <vector>

using namespace std;

//ifdef Silver
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N{}, M{};
    cin >> N;

    vector<int> numList(N);
    vector<int> sumList(N + 1, 0);

    for (int& num : numList)
    {
        cin >> num; 
    }

    for (int i = 0; i < N; i++)
    {
        sumList[i + 1] = sumList[i] + numList[i];
    }

    cin >> M;

    while (M--)
    {
        int X, Y;
        cin >> X >> Y;

        cout << sumList[Y] - sumList[X - 1] << "\n";
    }

    return 0;
}
//endif