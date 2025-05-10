#include <iostream>
#include <vector>

using namespace std;

pair<int, int> FindSqrt(int m, int n)
{
    vector<int> sqrtNums;
    
    for (int i = 1; i * i <= n; i++) 
    {
        int square = i * i;
        if (square >= m && square <= n)
        {
            sqrtNums.push_back(square);
        }
    }
    
    if (sqrtNums.empty()) 
    {
        return {0, 0};
    }

    int sum = 0;

    for (int num : sqrtNums) 
    {
        sum += num;
    }

    int min = sqrtNums[0];
    
    return {sum, min};
}

int main()
{
    int M, N;
    
    cin >> M >> N;
    
    pair<int, int> result = FindSqrt(M, N);
    
    if (result.first == 0)
    {
        cout << -1;
    }
    else 
    {
        cout << result.first << "\n" << result.second;
    }
    
    return 0;
}