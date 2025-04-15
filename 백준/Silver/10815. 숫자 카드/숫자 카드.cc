#include <iostream>
//#include <unordered_set>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, input;
    cin >> N;

    vector<int> cards(N);
    for (int i = 0; i < N; i++) {
        cin >> cards[i];
    }

    sort(cards.begin(), cards.end());

    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> input;

        // 마지막 숫자인 경우 공백 없이 출력
        if (i == M - 1) {
            cout << (binary_search(cards.begin(), cards.end(), input) ? 1 : 0);
        }
        else {
            cout << (binary_search(cards.begin(), cards.end(), input) ? 1 : 0) << " ";
        }
    }
    cout << "\n"; // 줄바꿈 추가
}