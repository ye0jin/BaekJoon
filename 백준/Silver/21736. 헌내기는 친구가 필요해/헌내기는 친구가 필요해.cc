#include <iostream>
#include <queue>
using namespace std;

char a[601][601] = {};
int visit[601][601] = {0};
int n, m, cnt = 0;

int dx[5] = { -1, 1, 0, 0 };
int dy[5] = { 0, 0, -1, 1 };
void BFS(int i, int j) 
{
	queue<pair<int, int>> q;
    q.push({ i, j });
	visit[i][j] = 1;
    while (!q.empty()) 
	{
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

		if (a[x][y] == 'P')
		{
			cnt++;
		}
        for (int t = 0; t < 4; t++) 
		{
            int nx = x + dx[t];
            int ny = y + dy[t];

			if (nx >= 0 && nx < n && ny >= 0 && ny < m 
				&& a[nx][ny] != 'X' && visit[nx][ny] == 0)
            {
				visit[nx][ny] = 1;
				q.push({ nx, ny });
            }
        }
    }
}
int main()
{
	int b = 0, c = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
			if (a[i][j] == 'I')
			{
				b = i;
				c = j;
			}
		}
	}
	BFS(b, c);
	if (cnt == 0) cout << "TT";
	else cout << cnt;
	return 0;
}