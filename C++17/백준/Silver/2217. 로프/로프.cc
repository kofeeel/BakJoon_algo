#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, avg{}, weight{};
	cin >> N;

	vector<int> ropes(N);
	
	for (int& i : ropes)
	{
		cin >> i;
	}

	sort(ropes.begin(), ropes.end());
	
	weight = ropes[0] * N;

	for (int i = 0; i < N; i++)
	{
		if (ropes[i] * (N - i) > weight) { weight = ropes[i] * (N - i); }
	}

	cout << weight;	
}