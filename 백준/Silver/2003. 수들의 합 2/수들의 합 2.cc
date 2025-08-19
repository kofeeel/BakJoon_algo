#include <iostream>

using namespace std;

int main()
{
	int N{}, M{}, arr[10000];
	cin >> N >> M;

	int answer{}, sum{}, start{}, end{};

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	while (start < N)
	{
		if (sum < M) 
		{
			sum += arr[end];
			end++;
		}
		else
		{
			sum -= arr[start];
			start++;
		}

		if (sum == M) answer++;
	}

	cout << answer;
}