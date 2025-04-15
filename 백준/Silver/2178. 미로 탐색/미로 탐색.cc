#include <iostream>
#include <queue>
#include <string>
using namespace std;

int row, col;
int maze[101][101];
int cost[101][101];     //시작점으로부터 N,M까지 비용
bool isVisit[101][101];

int dirX[4] = { 1, -1, 0, 0 };
int dirY[4] = { 0, 0, 1, -1 };

void bfs(int startX, int startY)
{
    queue<pair<int, int>> q;
    isVisit[startY][startX] = true;
    q.push({ startX, startY });
    cost[startY][startX] = 1;

    while (!q.empty())
    {
        int curX = q.front().first;
        int curY = q.front().second;
        q.pop();

        for (int dir = 0; dir < 4; dir++) 
        {
            int nextX = curX + dirX[dir];
            int nextY = curY + dirY[dir];
            //상하좌우 탐색할때 미로안에 있고, 방문한적없고, 갈수있는 경로일때
            if (nextX >= 0 && nextX < col && nextY >= 0 && nextY < row &&
                !isVisit[nextY][nextX] && maze[nextY][nextX] == 1)
            {
                isVisit[nextY][nextX] = true;
                q.push({ nextX, nextY });
                cost[nextY][nextX] = cost[curY][curX] + 1;
            }
        }
    }
}

int main()
{
    cin >> row >> col;

    for (int i = 0; i < row; i++)
    {
        string input;
        cin >> input;

        for (int j = 0; j < col; j++)
        {
            maze[i][j] = input[j] - '0';
        }
    }

    bfs(0, 0);

    cout << cost[row - 1][col - 1] << endl;

    return 0;
}