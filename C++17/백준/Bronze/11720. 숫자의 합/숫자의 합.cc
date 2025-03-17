#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    string number; // 큰 숫자를 저장할 문자열
    cin >> N >> number;

    int sum = 0;

    // 문자열을 한 글자씩 읽어 숫자로 변환하여 합산
    for (char c : number) {
        sum += (c - '0');  // 문자 '0'을 빼서 정수화
    }

    cout << sum << endl;
}