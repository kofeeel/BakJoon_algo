#include <iostream>
#include <deque>

using namespace std;

int main()
{	
	int N, M;
	cin >> N >> M;

	deque<int> deq;
	//2.N개의 원소를 넣을때까지 반복한다
	for (int i = 1; i <= N; ++i)
	{
		deq.push_back(i);
	}
	
	int count = 0;
	//M개의 원소를 뽑을때까지 반복
	//int checkPoint = deq.size() / 2 + deq.size() % 2;  //deq[checkpoint]가 push,pop할때마다 바뀜

	while(M--)
	{
		int inputNum;
		cin >> inputNum;
		
		//
		int idx = 0;
		for (int i = 0; i < deq.size(); i++)
		{
			if (inputNum == deq.at(i))
			{
				idx = i;
				break;
			}
		}
		//3.덱을 앞부분부터 순회해서 뽑으려는 원소가 있으면 연산 1을 수행한다.
			
		//4.뽑으려는 원소가 아닐때
		//4-1) 뽑으려는 원소가 인덱스상 중간위치에 있는 원소보다 작다면 연산2를 수행한다.
		if (idx < deq.size() / 2 + deq.size() % 2)
		{
		 //연산2: 왼쪽으로 한 칸 이동  첫번째 원소를 맨뒤로 보내기 
		 //덱에들어있는 원소가 뽑으려는 원소면 연산1수행 
			for (int i = 0; i < idx; i++)
			{
				deq.push_back(deq.front());
				deq.pop_front();
				//뽑으려는 원소가 배열의 중간값보다 작으면 연산2수행하고 count	
				count++;
			}
		}
		//4-2) 뽑으려는 원소가 인덱스상 중간위치에 있는 원소보다 크다면 연산3을 수행한다.
		else
		{
			for (int j = 0; j < deq.size() - idx; j++)
			{
				//연산3: 오른쪽으로 한칸이동 마지막 원소를 첫번째로 보내기
				deq.push_front(deq.back());
				deq.pop_back();
				//뽑으려는 원소가 배열의 중간값보다 크면 연산2수행하고 count	
				count++;
			}
		}
	//5.연산2나 연산3을 수행했다면 연산1을 수행한다.
		deq.pop_front();
	}
	std::cout << count;
}