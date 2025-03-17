#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

vector<vector<int>> graph;
vector<bool> visited;

void initializeGraph(int N, int M) {
    graph.resize(N + 1);
    for (int i = 0; i < M; ++i) {
        int u, v;
        cin >> u >> v;
        
        // 중복 간선을 방지하고 무방향 그래프 구현
        if (find(graph[u].begin(), graph[u].end(), v) == graph[u].end()) {
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
    }
}

void sortGraph(int N) {
    for (int i = 1; i <= N; ++i) {
        sort(graph[i].begin(), graph[i].end());
    }
}

void dfs(int v) {
    cout << v << " ";
    visited[v] = true;

    for (int next : graph[v]) {
        if (!visited[next]) {
            dfs(next);
        }
    }
}

void bfs(int v) {
    queue<int> q;
    q.push(v);
    visited[v] = true;

    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        cout << curr << " ";

        for (int next : graph[curr]) {
            if (!visited[next]) {
                q.push(next);
                visited[next] = true;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M, V;
    cin >> N >> M >> V;

    initializeGraph(N, M);  // 그래프 입력 처리
    sortGraph(N);           // 그래프 정렬

    // DFS 수행
    visited.assign(N + 1, false);
    dfs(V);
    cout << '\n';

    // BFS 수행
    visited.assign(N + 1, false);
    bfs(V);
    cout << '\n';

    return 0;
}
