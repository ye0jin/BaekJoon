
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	long long int n, m;
	cin >> n >> m; // 나무의수, 가져가는나무의길이
	int a[1000001] = {};
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	sort(a, a + n);
	long long int b = 0, c = a[n - 1], mid;
	long long int cnt, ans =0;
	while (b <= c)
	{
		mid = (b + c) / 2;
		cnt = 0;

		for (int i = 0; i < n; i++)
		{
			if (a[i] - mid > 0) cnt += a[i] - mid;
		}
		if (cnt >= m) {
			b = mid + 1;
			if (mid > ans) ans = mid;
		}
		else c = mid - 1;
	}
	cout << ans;
	return 0;
}