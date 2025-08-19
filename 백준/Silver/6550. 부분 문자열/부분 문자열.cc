#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s, t;
	
	while (cin >> s >> t)
	{
		int index = 0;

		for (int i = 0; i < t.length(); i++)
		{
			if (s[index] == t[i]) { index++; }
		}

		(index == s.length()) ? cout << "Yes\n" : cout << "No\n";
	}
	
}