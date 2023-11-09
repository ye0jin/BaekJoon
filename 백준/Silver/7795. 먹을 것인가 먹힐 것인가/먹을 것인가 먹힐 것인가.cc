#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int t;
	cin >> t;
	int n, m;
	
	for (int i = 0; i < t; i++)
	{
		int cnt = 0;
		vector<int> a;
		vector<int> b;
		cin >> n >> m;
		int k;
		for (int j = 0; j < n; j++)
		{
			cin >> k;
			a.push_back(k);
		}
		for (int j = 0; j < m; j++)
		{
			cin >> k;
			b.push_back(k);
		}

		sort(b.begin(), b.end());
		for (auto aa : a)
		{
			cnt += lower_bound(b.begin(), b.end(), aa) - b.begin();
		}

		cout << cnt << '\n';
	}
	return 0;
}