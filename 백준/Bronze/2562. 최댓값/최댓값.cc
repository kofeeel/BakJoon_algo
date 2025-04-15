#include <iostream>

using namespace std;

int main()
{
    int maxNum{};
    int maxIndex{};
    int inputNum{};

    for (int i = 1; i <= 9; i++)
    {
        cin >> inputNum;
        if (maxNum < inputNum)
        {
            maxNum = inputNum;
            maxIndex = i;
        }
    }

    cout << maxNum << "\n" << maxIndex;
    return 0;
}