#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	int a[11] = {};
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	sort(a, a + n, greater<int>());

	int cnt = 0;
	
	int i = 0;
	while (true)
	{
		if (m - a[i] < 0)
		{
			i++;
		}
		else // 0보다 크거나 작을 경우
		{
			cnt++;
			m -= a[i];
			while (true)
			{
				if (m - a[i] <= 0) break;
				cnt++;
				m -= a[i];
			}

			if (m == 0)
			{
				cout << cnt;
				return 0;
			}
		}
	}
	return 0;
}