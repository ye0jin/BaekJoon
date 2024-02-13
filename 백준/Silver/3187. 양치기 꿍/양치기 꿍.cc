#include <iostream>
using namespace std;
int n, m;
int cntw, cnts;
char a[251][251] = {};

void DFS(int i, int j)
{
	if (i < 0 || i >= n || j < 0 || j >= m || a[i][j] == '#') return;
	
	if (a[i][j] == 'v') cntw++;
	else if (a[i][j] == 'k') cnts++;

	a[i][j] = '#';

	DFS(i-1, j);
	DFS(i+1, j);
	DFS(i, j+1);
	DFS(i, j-1);
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

	int totw = 0, tots= 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) {
			if (a[i][j] == 'v' || a[i][j] == 'k')
			{
				DFS(i, j);
				if (cntw >= cnts)  totw += cntw;
				else if (cntw < cnts) tots += cnts;

				cntw = cnts = 0;
			}
		}
	}

	cout << tots << " " << totw;
	return 0;
}