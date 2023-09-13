#include <iostream>

using namespace std;
int t, m, n, k;
int a[101][101] = {};
void DFS(int i, int j) 
{
	if (i < 0 || i >= n || j < 0 || j >= m || a[i][j] == 0) return;
	a[i][j] = 0;
	DFS(i-1, j);
	DFS(i+1, j);
	DFS(i, j-1);
	DFS(i, j+1);
}
int main()
{
	cin >> t;
	int x, y;
	for (int i = 0; i < t; i++) {
		cin >> m >> n >> k;
		int cnt = 0;
		for (int j = 0; j < k; j++) {
			cin >> x >> y;
			a[y][x] = 1;
		}

		for (int j = 0; j < n; j++) {
			for (int h = 0; h < m; h++) {
				if (a[j][h] == 1) {
					cnt++;
					DFS(j, h);
				}
			}
		}

		cout << cnt << '\n';
	}
	return 0;
}