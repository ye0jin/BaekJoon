#include <iostream>
#include <map>

using namespace std;

int main()
{
	int n, m;
	map <int, int> map;
	cin >> n >> m;
	int a;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		map[a]++;
	}
	for (int i = 0; i < m; i++)
	{
		cin >> a;
		map[a]++;
	}
	int cnt = 0;
	for (auto i : map)
	{
		if (i.second == 1)
		{
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}