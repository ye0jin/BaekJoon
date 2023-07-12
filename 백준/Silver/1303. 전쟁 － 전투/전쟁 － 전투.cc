#include <iostream>

using namespace std;

int n, m;
int a[101][101];

int cnt = 0;
long long int ans1 = 0, ans2 = 0;

void check(int i, int j, int what)
{
	if (i < 0 || i >= n || j < 0 || j >= m || a[i][j] != what) return;

	a[i][j] = 0;
	cnt++;

	//cout << cnt << endl;
	check(i + 1, j, what);
	check(i - 1, j, what);
	check(i, j + 1, what);
	check(i, j - 1, what);
}
int main()
{
	cin >> m >> n;
	char input;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> input;

			if (input == 'W') a[i][j] = 1;
			else if (input == 'B') a[i][j] = 2;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] == 0) continue;

			bool b = a[i][j] == 1;
			check(i, j, a[i][j]);

			if (b) ans1 = (cnt * cnt) + ans1;
			else ans2 = (cnt * cnt) + ans2;

			cnt = 0;
		}
	}

	cout << ans1 << " " << ans2;

	return 0;
}