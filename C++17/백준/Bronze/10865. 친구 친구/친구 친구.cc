#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N{}, M{};
	cin >> N >> M;

	vector<int> friends(N, 0);

	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;

		friends[a - 1]++;
		friends[b - 1]++;
	}

	for (int& i : friends)
	{
		cout << i << "\n";
	}
}