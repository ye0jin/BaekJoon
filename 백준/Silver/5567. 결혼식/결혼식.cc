#include <iostream>
#include <vector>

using namespace std;
int n, m, cnt = 0;
int a[1001][1001] = {};
int main() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int v1, v2;
		cin >> v1 >> v2;
		a[v1][v2] = a[v2][v1] = 1;
	}

	int b[501] = {};
	int c[501] = {};
	for (int i = 2; i <= n; i++)
	{
		if (a[1][i] == 1)
		{
			b[i] = 1;
			c[i] = 1;
		}
	}
	for (int i = 2; i <= n; i++) {
		if (b[i] == 1) {
			for (int j = 1; j <= n; j++) {
				if (a[i][j] == 1) {
					c[j] = 1;
				}
			}
		}
	}

	for (int i = 2; i <= n; i++) {
		if (c[i] == 1) cnt++;
	}

	cout << cnt;

	return 0;
}