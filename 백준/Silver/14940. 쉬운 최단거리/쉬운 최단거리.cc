#include <iostream>
#include <queue>
using namespace std;
int n, m;
int a[1001][1001] = {};
int b[1001][1001] = {};

int dx[5] = { -1, 1, 0, 0 };
int dy[5] = { 0, 0, -1, 1 };

void BFS(int i, int j) 
{
    queue<pair<int, int>> q;
    q.push({ i, j });
    b[i][j] = 0;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int t = 0; t < 4; t++) {
            int nx = x + dx[t];
            int ny = y + dy[t];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m && a[nx][ny] == 1 && b[nx][ny] == -1)
            {
                b[nx][ny] = b[x][y] + 1;
                q.push({ nx, ny });
            }
        }
    }
}

int main() {
    cin >> n >> m;
    int starti = 0, startj = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
            b[i][j] = -1;
            if (a[i][j] == 2) {
                starti = i;
                startj = j;
            }
            else if (a[i][j] == 0) {
                b[i][j] = 0;
            }
        }
    }

    BFS(starti, startj);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << b[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}
