#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> nums;
    int a, b, c;
    cin >> a >> b >> c;
    nums.push_back(a);
    nums.push_back(b);
    nums.push_back(c);

    sort(nums.begin(), nums.end());

    for (auto& c : nums)
    {
        cout << c << " ";
    }
}