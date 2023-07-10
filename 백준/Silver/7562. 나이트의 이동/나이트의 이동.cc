#include <iostream>
#include <queue>
#include <cstring>

using namespace std;
int n, v, flag = 0;
int targetx, targety;
int a[501][501];

int dirx[8] = { -2,-1,1,2,-2   ,-1,1,2 };
int diry[8] = { 1,2,2,1,-1,     -2,-2,-1 };

struct st
{
	int x, y;
	int cnt;
};

void check(int v1, int v2)
{
	queue<st> q;
	q.push({ v1,v2,0 });

	while (!q.empty())
	{
		int x1 = q.front().x;
		int y1 = q.front().y;
		int cnt1 = q.front().cnt;

		if (x1 == targetx && y1 == targety)
		{
			flag = 1;
			cout << cnt1 << '\n';
			return;
		}

		q.pop();

		for (int i = 0; i < 8; i++)
		{
			int nx = x1 + dirx[i];
			int ny = y1 + diry[i];

			if (nx >= 0 && nx < v && ny >= 0 && ny < v && a[nx][ny] == 1)
			{
				a[nx][ny] = 0;
				q.push({ nx,ny,cnt1 + 1 });
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> v;

		for (int k = 0; k < v; k++)
		{
			for (int j = 0; j < v; j++)
			{
				a[k][j] = 1;
			}
		}

		int startx, starty;
		cin >> startx >> starty;
		cin >> targetx >> targety;

		check(startx, starty);

		if (flag == 0)
		{
			cout << "0\n";
		}
		memset(a, 0, sizeof(a));
		flag = 0;
	}
	return 0;
}