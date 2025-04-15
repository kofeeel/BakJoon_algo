#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n{}, sum{};
	cin >> n;
	vector<int> yaksu(n);

	for (int i = 0; i < n; i++)
	{
		cin >> yaksu[i];
	}
	
	sort(yaksu.begin(), yaksu.end());

	if (n == 1)
	{
		sum = (long long)yaksu[0] * yaksu[0];
	}
	else
	{
		sum = (long long)yaksu[0] * yaksu[n - 1];
	}

	cout << sum;
}