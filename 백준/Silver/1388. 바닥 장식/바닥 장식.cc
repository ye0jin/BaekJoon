#include <iostream>
using namespace std;
int n, m, cnt = 0;
char a[51][51] = {};

void NDFS(int i, int j)
{
	if (j >= m || a[i][j] != '-') return;
	a[i][j] = '.';
	NDFS(i, j + 1);
}
void MDFS(int i, int j)
{
	if (i >= n || a[i][j] != '|') return;
	a[i][j] = '.';
	MDFS(i+1, j);
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
			if (a[i][j] == '-')
			{
				cnt++;
				NDFS(i, j);
			}
			else if (a[i][j] == '|')
			{
				cnt++;
				MDFS(i, j);
			}
		}
	}
	cout << cnt;
	return 0;
}