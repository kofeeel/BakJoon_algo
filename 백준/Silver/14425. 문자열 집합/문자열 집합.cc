#include <iostream>
#include <map>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
    cout.tie(NULL);
    
	map<string, bool> answers;
	string s;

	int N{}, M{}, count{};
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> s;
		answers.insert({ s, true });
	}

	for (int j = 0; j < M; j++)
	{
		cin >> s;
		if (answers[s] == true) { count++; }
	}
	
	cout << count;
}