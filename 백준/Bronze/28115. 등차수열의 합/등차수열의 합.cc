#include <iostream>
#include <deque>
#include <vector>
#include <string>

using namespace std;

void ReverseRotate(deque<int>& Gear, int index, int dir)
{
	if (Gear.empty()) return;
	Gear.push_front(Gear.back());
	Gear.pop_back();
}

//시계방향 오른쪽으로 한칸
//void Rotate(deque<int>& Gear, int index, int dir)
//{
//	if (Gear.empty()) return;
//	Gear.push_back(Gear.front());
//	Gear.pop_front();
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	vector<deque<int>> Gears(4);
//
//	for (auto& gear : Gears)
//	{
//		for (int& teeth : gear)
//		{
//			cin >> teeth;	
//		}
//	}
//	
//	int r{};
//	cin >> r;
//
//	while (r--)
//	{
//		int a{}, b{};
//		cin >> a >> b;
//
//		for (int i = 0; i < 4; i++)
//		{
//			if (i > a) break;
//
//			if (b == 1) { Rotate(Gears[i], a, b); }
//			else if (b == -1) { ReverseRotate(Gears[i], a, b); }
//		}
//	}
//
//
//	
//}

//조건 1: B,C의 i번째 원소의 합은 A의 i번째 원소
//조건 2: B,C의 i+1번째 원소 - i번째 원소 = i+2번째 원소 - i+1번째 원소

int main()
{
	int N{}, M{};
	bool find = true;

	cin >> N;
	vector<int> A(N);

	for (int& a : A)
	{
		cin >> a;
	}

	if (N > 2)
	{
		int addnum = A[1] - A[0];
		for (int i = 2; i < N; i++)
		{
			if (A[i] - A[i - 1] != addnum)
			{
				find = false;
				break;
			}
		}
	}

	if (find)
	{
		cout << "YES\n";

		for (int i = 0; i < N; i++)
		{
			cout << 0 << " ";
		}
		cout << "\n";
		
		for (int i = 0; i < N; i++)
		{
			cout << A[i] << " ";
		}
		cout << "\n";
	}
	else
	{
		cout << "NO\n";
	}

	return 0;
}