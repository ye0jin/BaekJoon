#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
	cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
	long long int n, a[100001] = {};
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];

	sort(a, a + n);

	long long int cnt = 0, max = 0, idx = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] == a[i + 1])
		{
			++cnt;
			if (cnt > max)
			{
				idx = i;
				max = cnt;
			}
		}
		else cnt = 0;
	}

	cout << a[idx];

	return 0;
}