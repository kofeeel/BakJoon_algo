#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int gcd(int a, int b)
{
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
int main()
{
	//입력 n:m	 n과m의 최대공약수로 나누기
	string inputNums;
	cin >> inputNums;
	//18:24  3:4 
	string A{}, B{};
	int a{}, b{}, grad{};
	//문자열을 ':'기준으로 잘라서 왼쪽을 a, 오른쪽을 b에 넣기
	A = inputNums.substr(0,inputNums.find(":"));
	B = inputNums.substr(inputNums.find(":") + 1,inputNums.size());
	a = stoi(A);
	b = stoi(B);
	//a,b중 더 큰 숫자에서 작은숫자를 나눴을때
	//나머지가 두 수의 최대공약수
	grad = gcd(a, b);
	//a,b를 최대공약수로 나누고 a:b 상태로 출력
	cout << a / grad << ":" << b / grad << endl;
	
	return 0;
}