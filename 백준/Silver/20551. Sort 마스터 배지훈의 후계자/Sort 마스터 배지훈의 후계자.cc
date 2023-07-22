#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n, m,b;
	cin >> n >> m;
	
	vector<int> a(n);

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	sort(a.begin(), a.end());
	int flag = 0;

	for (int j = 0; j < m; j++)
	{
		cin >> b;

		int l = 0;
		int r = n - 1;
		int ans = 0;
		int mid = 0;
		int flag = 0;

		// 이거 아니면 시간초과
		while (l <= r)
		{
			mid = (l + r) / 2;

			if (a[mid] < b)
			{
				l = mid + 1;
			}
			else
			{
				ans = mid;
				r = mid - 1;
			}

			if (a[mid] == b)
			{
				flag = 1;
			}
		}
		if (flag == 0) cout << "-1\n";
		else cout << ans << '\n';
	}
	return 0;
}