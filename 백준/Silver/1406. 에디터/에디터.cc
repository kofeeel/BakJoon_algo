#include <iostream>
#include <list>

using namespace std;

int main()
{
	string abc;
	int M;
	//입력받을 문자열의 개수 N, 명령어의 개수 M
	cin >> abc >> M;

	list<char> alphabets;
	//입력받은 문자열을 리스트에 옮기기
	for (char c : abc)
	{
		alphabets.push_back(c);
	}

	list<char>::iterator it;
	it = alphabets.end();

	for (int i = 0; i < M; i++)
	{
		//명령어 입력받기
		char c;
		cin >> c;
		switch (c)
		{
			//커서를 왼쪽으로 한칸 옮김
		case 'L':
			if (it != alphabets.begin())
			{
				it--;
			}
			break;
		case 'D':
			if (it != alphabets.end())
			{
				it++;
			}
			break;
		case 'B':
			if (it != alphabets.begin())
			{
				it = alphabets.erase(--it);
				//it++;
			}
			break;
		case 'P':
			char d;
			cin >> d;
			alphabets.insert(it, d);
			break;
		default:
			break;
		}
	}

	for (auto it = alphabets.begin(); it != alphabets.end(); it++)
	{
		cout << *it;
	}
}