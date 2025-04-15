#include <iostream>
//#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, card;
    cin >> N;

    vector<int> cards(N);
    for (int i = 0; i < N; i++) {
        cin >> cards[i];
    }

    // 이분 탐색을 위한 정렬
    sort(cards.begin(), cards.end());

    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> card;

        // lower_bound: 지정된 값 이상인 첫 번째 요소의 위치
        // upper_bound: 지정된 값보다 큰 첫 번째 요소의 위치
        auto lower = lower_bound(cards.begin(), cards.end(), card);
        auto upper = upper_bound(cards.begin(), cards.end(), card);

        // 두 반복자 간의 거리가 해당 카드의 개수
        int count = upper - lower;

        cout << count;
        if (i < M - 1) cout << " ";
    }

    return 0;
}