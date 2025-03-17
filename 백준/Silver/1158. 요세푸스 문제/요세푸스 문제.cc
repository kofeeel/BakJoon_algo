#include <iostream>
#include <vector>
#include <deque>

using namespace std;
//원형큐니까 덱에 저장
//출력수열은 배열에 저장
int main()
{
	int N, K;
	cin >> N >> K;

	deque<int> numbers;
	vector<int> yosepus;

	for (int i = 1; i <= N; i++)
	{
		numbers.push_back(i);
	}

	while (!numbers.empty())
	{
		//K번째 원소 맨앞으로 가져오기
		for (int i = 1; i < K; i++)
		{
			//K번째 원소 뒤로 가져오기
			numbers.push_back(numbers.front());
			numbers.pop_front();
		}
		//K번째 원소 제거하고 요세푸스에 저장
		yosepus.push_back(numbers.front());
		numbers.pop_front();
	}

	cout << "<";
	for (auto i = 0; i < yosepus.size(); i++)
	{
		cout << yosepus[i];
		if (i != yosepus.size() - 1)
		{
			cout << ", ";
		}
	}
	cout << ">\n";
}