#include <iostream>
#include <algorithm>
using namespace std;
char a[251][251] = {};
int n, m, o, v;
int ans1, ans2;

void check(int i, int j)
{
	if (i < 0 || i >= n || j < 0 || j >= m || a[i][j] == '#') return;
	
	if (a[i][j] == 'o') o++;
	if (a[i][j] == 'v') v++;
	a[i][j] = '#';

	check(i-1, j);
	check(i+1, j);
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
			if (a[i][j] == 'o') ans1++;
			else if (a[i][j] == 'v') ans2++;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] == '#') continue;
			check(i, j);

			if (o > v) ans2 -= v;
			else ans1 -= o;
			o = v = 0;
		}
	}

	cout << ans1 << " " << ans2;

}