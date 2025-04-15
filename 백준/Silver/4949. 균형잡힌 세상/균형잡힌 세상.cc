#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool isBalanced(const string& str)
{
	stack<char> s;
	//"[}, "("를 스택에 담아두고 닫히는괄호만 체크
	for (char c : str)
	{
		if (c == '(' || c == '[')
		{
			s.push(c);
		}
		else if (c == ')')
		{
			if (s.empty() || s.top() != '(')
			{
				return false;
			}
			s.pop();
		}
		else if (c == ']')
		{
			if (s.empty() || s.top() != '[')
			{
				return false;
			}
			s.pop();
		}
	}

	return s.empty();
}
int main()
{
	//문자열 입력받고
	//입력받은 문자열에서 "[" 와 "]" 개수가 같은지 비교,   "(" 와 ")" 개수가 같은지 비교
	//"."이 있으면 문자열 입력 종료
	string input;

	while (getline(cin, input)) 
	{
		if (input == ".") 
		{
			break;
		}
		input.pop_back();
		if (isBalanced(input)) 
		{
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
}