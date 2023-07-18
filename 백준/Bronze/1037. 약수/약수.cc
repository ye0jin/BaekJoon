#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
	int n;
	cin >> n;

	int a[1001] = {};

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	sort(a, a + n);
	int ans = a[0] * a[n - 1];
	cout << ans;

	return 0;
}