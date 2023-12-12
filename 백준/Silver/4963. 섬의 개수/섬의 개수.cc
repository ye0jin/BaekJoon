#include <iostream>

using namespace std;

int n , m;
int a[51][51];
void check(int i, int j)
{
	if (i < 0 || j < 0 || i >= m || j >= n || a[i][j] == 0) return;

	a[i][j] = 0;

	check(i + 1, j);
	check(i - 1, j);
	check(i, j + 1);
	check(i, j - 1);
	check(i - 1, j - 1);
	check(i - 1, j + 1);
	check(i + 1, j - 1);
	check(i + 1, j + 1);
}
int main()
{
	while (true)
	{
		int cnt = 0;
		cin >> n >> m;
		if (n == 0 && m == 0) break;

		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> a[i][j];
			}
		}

		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (a[i][j] == 1)
				{
					++cnt;
					check(i, j);
				}
			}
		}

		cout << cnt << endl;
	}
	return 0;
}