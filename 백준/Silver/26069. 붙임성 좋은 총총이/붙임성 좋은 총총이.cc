#include <iostream>
#include <map>
using namespace std;
int main()
{
	int n, cnt=0;
	map<string, int> map;
	string a, b;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		if (a == "ChongChong" || b == "ChongChong")
		{
			map[a]++;
			map[b]++;
		}

		else if (map[a] >= 1) map[b]++;
		else if (map[b] >= 1) map[a]++;
	}
	for (auto i : map)
	{
		if (i.second == 0) continue;
		cnt++;
	}

	cout << cnt;

	return 0;
}