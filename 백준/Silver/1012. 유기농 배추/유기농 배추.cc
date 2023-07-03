#include<iostream>

using namespace std;

int n, m, k;
int a[100][100];

void check(int i, int j)
{
	if (i < 0 || j < 0 || i >= n || j >= m || a[i][j] == 0) return;

	a[i][j] = 0;
	check(i + 1, j);
	check(i - 1, j);
	check(i, j + 1);
	check(i, j - 1);
}
int main()
{
	int how;
	cin >> how;
	
	for (int h = 0; h < how; h++)
	{
		cin >> m >> n >> k;

		int q = 0;
		for (int i = 0; i < k; i++)
		{
			int b, c;
			cin >> b >> c;
			a[c][b] = 1;
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (a[i][j] == 1)
				{
					q++;
					check(i, j);
				}
			}
		}
		cout << q << '\n';

	}
	
	return 0;
}