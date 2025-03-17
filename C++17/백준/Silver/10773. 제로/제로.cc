#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int K{};
    cin >> K;
    
    vector<int> calculate;
    int sum{0};

    for (int i = 0; i < K; i++)
    {
        int s;
        cin >> s;

        if (s != 0)
        {
            calculate.push_back(s);
        }
        else
        {
            if(!calculate.empty())
            calculate.pop_back();
        }
    }

    for (int i : calculate)
    {
        sum += i;
    }

    cout << sum;
}