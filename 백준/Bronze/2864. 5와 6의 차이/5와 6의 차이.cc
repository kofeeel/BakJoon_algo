#include <iostream>
#include <string>

using namespace std;
int main()
{
	string arr[2];
	int a{}, b{}, min{}, max{};

	for (int i = 0; i < 2; i++)
	{
		cin >> arr[i];
	}
	
	for (char& c : arr[0])
	{
		if (c == '6') { c = '5'; }
	}
	for (char& c : arr[1])
	{
		if (c == '6') { c = '5'; }
	}
	
	a = stoi(arr[0]);
	b = stoi(arr[1]);
	min = a + b;

	for (char& c : arr[0])
	{
		if (c == '5') { c = '6'; }
	}
	for (char& c : arr[1])
	{
		if (c == '5') { c = '6'; }
	}

	a = stoi(arr[0]);
	b = stoi(arr[1]);
	max = a + b;
	
	cout << min << " " << max;
}