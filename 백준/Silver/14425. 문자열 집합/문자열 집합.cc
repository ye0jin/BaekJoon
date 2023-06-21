#include <map>
#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int cnt = 0;
	map<string, int> map;
	int n, m;
	string a;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		map[a]++;
	}

	for (int i = 0; i < m; i++)
	{
		cin >> a;
		if (map[a] > 0)
		{
			cnt++;
		}
	}

	cout << cnt;
	return 0;
}