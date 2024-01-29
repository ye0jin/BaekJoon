#include <iostream>
#include <cstring>

using namespace std;
int n, a, b, cnt = 0;
char arr[101][101] = {};

void DFS(int i, int j)
{
	if (i < 0 || i >= a || j < 0 || j >= b || arr[i][j] != '#') return;
	arr[i][j] = '.';
	DFS(i+1, j);
	DFS(i-1, j);
	DFS(i, j+1);
	DFS(i, j-1);
}
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) 
	{
		cnt = 0;
		cin >> a >> b;
		for (int j = 0; j < a; j++)
		{
			for (int t = 0; t < b; t++)
			{
				cin >> arr[j][t];
			}
		}

		for (int j = 0; j < a; j++)
		{
			for (int t = 0; t < b; t++)
			{
				if (arr[j][t] == '#')
				{
					cnt++;
					DFS(j, t);
				}
			}
		}
		cout << cnt << '\n';
		memset(arr, '.', sizeof(arr));
	}
}