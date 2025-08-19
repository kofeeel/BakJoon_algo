#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	set<string> answerSet;
	set<string>::iterator it;

	//map<int, string>::iterator testmapIter;
	int count {0};

	//집합 S
	for (int i = 0; i < N; i++)
	{
		string str;
		cin >> str;
		answerSet.insert(str);
	}
	
	for (int i = 0; i < M; i++)
	{
		string str;
		cin >> str;
		it = answerSet.find(str);
		if (it != answerSet.end())
		{
			count++;
		}
	}
	std::cout << count;
}