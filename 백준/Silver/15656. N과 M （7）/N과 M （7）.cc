#include <iostream>
#include <algorithm>
using namespace  std;

int n, m;
//int visit[11] = {};
int a[11] = {};
int b[11] = {};
void check(int v)
{
	if (v == m)
	{
		for (int i = 0; i < m; i++)
		{
			cout << a[i] << " ";
		}
		cout << '\n';
		return;
	}
	for (int i = 0; i < n; i++)
	{
		//if (visit[i] == 1) continue;
		//visit[i] = 1;
		a[v] = b[i];
		check( v + 1);
		//visit[i] = 0;
	}
}
int main()
{
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}
	sort(b, b + n);
	check(0);
	return 0;
}