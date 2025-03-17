#include <bits/stdc++.h>
using namespace std;

void findClosestSum(const vector<int>& arr, int& bestNum1, int& bestNum2, int& bestNum3) {
    int n = arr.size();
    long long bestSum = LLONG_MAX;  // 최적의 합을 long long으로 초기화

    for (int i = 0; i < n - 2; ++i) {
        int left = i + 1, right = n - 1;

        while (left < right) {
            long long sum = (long long)arr[i] + arr[left] + arr[right];

            if (abs(sum) < abs(bestSum)) {
                bestSum = sum;
                bestNum1 = arr[i];
                bestNum2 = arr[left];
                bestNum3 = arr[right];
            }

            if (sum < 0)
                ++left;
            else if (sum > 0)
                --right;
            else
                break;  // sum이 0이면 최적이므로 종료
        }

        if (bestSum == 0) break;  // 0에 가장 가까운 값을 찾았으므로 종료
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) cin >> arr[i];

    sort(arr.begin(), arr.end());

    int bestNum1 = 0, bestNum2 = 0, bestNum3 = 0;
    findClosestSum(arr, bestNum1, bestNum2, bestNum3);

    // 결과 출력: 오름차순 정렬
    vector<int> result = {bestNum1, bestNum2, bestNum3};
    sort(result.begin(), result.end());
    for (int num : result) cout << num << " ";
    cout << '\n';

    return 0;
}
