#include <iostream>
#include <map>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int m = 0;
	string a, b;
	for (int i = 0; i < n; i++)
	{
		map<string, int> map;
		cin >> m;
		for (int j = 0; j < m; j++)
		{
			cin >> a >> b;
			map[b]++; // head = 2, eye = 1
		}
		int ans = 1;
		for (auto i : map)
		{
			int a = (i.second + 1);
			ans *= a;
		}
		cout << ans - 1 << '\n';
	}
	return 0;
}