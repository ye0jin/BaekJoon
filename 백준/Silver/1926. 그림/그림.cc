#include <iostream>

using namespace std;

int n, m;
int a[600][600];
int cnt, maxcnt, how;

void check(int i, int j)
{
	if (i < 0 || j < 0 || i >= n || j >= m|| a[i][j] == 0) return;
	cnt++;

	a[i][j] = 0;
	check(i+1, j);
	check(i-1, j);
	check(i, j+1);
	check(i, j-1);
}

int main()
{
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
				check(i, j);
				how++;
			}

			if (maxcnt < cnt)
			{
				maxcnt = cnt;
			}

			cnt = 0;
		}
	}

	cout << how <<"\n" << maxcnt;
	
	return 0;
}