#include <iostream>
#include <list>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	list<char> strings;
	list<char>::iterator it;
	
	it = strings.begin();

	for (int i = 0; i < N; i++)
	{
		strings.clear();
		it = strings.begin();
		string str;
		cin >> str;
		//<<BP<A>>Cd-
		for (char c : str)
		{
			switch (c)
			{
			//'-' 이면 커서의 바로 앞에 글자가 있으면 삭제     erase
			case '-':
				if (it == strings.begin())
				{
					continue;
				}
				else
				{
					it = strings.erase(--it);
				}
				break;
			case '<':
				if (it != strings.begin())
				{
					it--;
				}
				break;
			case '>':
				if (it != strings.end())
				{
					it++;
				}
				break;
			default:
				it = strings.insert(it, c);
				it++;
				break;
			}
		}
		       
		for (auto it = strings.begin(); it != strings.end(); it++)
		{              
			cout << *it;
		}
		cout << "\n";
	}
}