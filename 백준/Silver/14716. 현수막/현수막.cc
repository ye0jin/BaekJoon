#include <iostream>

using namespace std;
int n, m, a[1001][1001];

void check(int i, int j)
{
	if (i < 0 || i >= n || j < 0 || j >= m || a[i][j] == 0) return;

	a[i][j] = 0;
	check(i - 1, j);
	check(i + 1, j);
	check(i, j + 1);
	check(i, j - 1);
	check(i - 1, j - 1);
	check(i - 1, j + 1);
	check(i + 1, j - 1);
	check(i + 1, j + 1);
}
int main()
{
	int cnt = 0;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] == 1)
			{
				cnt++;
				check(i, j);
			}
		}
	}

	cout << cnt;
	return 0;
}