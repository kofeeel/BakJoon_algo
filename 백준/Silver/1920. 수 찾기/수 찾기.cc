#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, input;
    cin >> N;

    vector<int> nums(N); 
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> input;

        // 존재 여부 확인
        bool exists = binary_search(nums.begin(), nums.end(), input);

        // 각 줄에 결과 출력
        cout << (exists ? 1 : 0) << "\n";
    }

    return 0;
}