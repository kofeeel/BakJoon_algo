#include <stack>
#include <iostream>
#include <string>


using namespace std;

//스택은 뒤부터나옴 
//ABAB 는 B,A,B,A  Top으로 나올 쌍이 없음 // AAA 는 A,A,A  Top이 쌍으로 나오는데 쌍이부족함
//AABB 는 B,B,A,A  Top이  쌍으로나옴  
//ABBA 는 A,B,B,A  Top을 저장하고 다음 Top이 쌍으로나옴 
int main()
{

	
	int N;
	cin >> N;

	int count{};

	while (N--)
	{
		string input;
		cin >> input;
		stack<char>gWords;  //반복할때마다 새로운 스택
		 //입력받은 문자열 스택에 넣기
		for (auto c : input)
		{
			if (!gWords.empty() && (gWords.top() == c))
			{
				gWords.pop();
			}// ABBAB  입력  
			else
			{
				gWords.push(c);
			}
 		}
		if (gWords.empty())
		{
			count++;
		}
	}
	cout << count;
}
//문제 AAA일때만 안됨  자꾸 back() 오류 뜸