#include <iostream>
#include <queue>
using namespace std;
int n, m;
char g[101][101];

void DFS(int i, int j)
{
	if (i < 0 || i >= n || j < 0 || j >= m || g[i][j] == '.') return;

	g[i][j] = '.';
	DFS(i+1, j);
	DFS(i-1, j);
	DFS(i, j+1);
	DFS(i, j-1);
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> g[i][j];
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (g[i][j] == '#')
			{
				ans++;
				DFS(i, j);
			}
		}
	}
	cout << ans;
	return 0;
}