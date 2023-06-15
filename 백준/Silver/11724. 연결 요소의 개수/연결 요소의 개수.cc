
#include <iostream>
#include <deque>
using namespace std;

int n, m, arr[1001][1001], visit[1001];
int cnt = 0;

void check(int v)
{
	visit[v] = 1;
	for (int i = 1; i <= n; i++)
	{
		if (arr[v][i] == 1 && visit[i]==0)
		{
			check(i);
		}
	}
}
int main()
{
	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		int v1, v2;
		cin >> v1 >> v2;
		arr[v1][v2] = 1;
		arr[v2][v1] = 1;
	}

	for (int i = 1; i <= n; i++)
	{
		if (visit[i] == 0) cnt++;
		check(i);
	}

	cout << cnt;
	return 0;
}