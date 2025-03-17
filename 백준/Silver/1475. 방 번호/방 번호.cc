#include <iostream>
#include <vector>
using namespace std;

int main() {
    string roomNum;
    cin >> roomNum;

    vector<int> digitCount(10, 0); // 0~9까지 각 숫자의 등장 횟수 저장

    // 각 숫자의 개수 세기
    for (char c : roomNum) {
        digitCount[c - '0']++;
    }

    // 중복되는 6,9 는 하나로 
    int sixNineCount = (digitCount[6] + digitCount[9] + 1) / 2;

    // 가장 많이 필요한 숫자의 개수를 찾음
    int maxCount = 0;
    for (int i = 0; i < 10; i++) {
        if (i == 6 || i == 9)
            continue; 
        maxCount = max(maxCount, digitCount[i]);
    }
    cout << max(maxCount, sixNineCount) << endl;

    return 0;
}
