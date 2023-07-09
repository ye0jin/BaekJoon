#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int n, m;
int cntan;
char map[101][101];
int visit[101][101] = {};
int dirx[5] = { 1,-1,0,0 };
int diry[5] = { 0,0,1,-1 };

struct st
{
	int x, y;
	int cnt;
};

void check(int x, int y)
{
	queue<st> q;
	q.push({ x,y,0 });
	visit[x][y] = 1;

	while (!q.empty())
	{
		int x1 = q.front().x;
		int y1 = q.front().y;
		int cnt1 = q.front().cnt;
		cntan = cnt1;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = x1 + dirx[i];
			int ny = y1 + diry[i];

			if (nx >= 0 && ny >= 0 && nx < n && ny < m && visit[nx][ny] == 0 && map[nx][ny] == 'L')
			{
				q.push({ nx,ny,cnt1 + 1 });
				visit[nx][ny] = 1;
			}
		}
	}
}

int main()
{
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> map[i][j];
		}
	}

	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (map[i][j] == 'L')
			{
				check(i, j);
				if (ans < cntan) ans = cntan;
				memset(visit, 0, sizeof(visit));
			}
		}
	}
	cout << ans;
	return 0;
}