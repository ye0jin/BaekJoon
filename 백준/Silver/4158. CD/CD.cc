#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, m, ans, input;
	unordered_map<int, int> map;

	while (true)
	{
		cin >> n >> m;
		if (n == 0 && m == 0) return 0;

		map.clear();

		for (int i = 0; i < n; i++)
		{
			cin >> input;
			map[input] = 1;
		}
		for (int i = 0; i < m; i++)
		{
			cin >> input;
			if (map[input] == 1) ans++;
		}

		cout << ans << '\n';
		ans = 0;
	}
}