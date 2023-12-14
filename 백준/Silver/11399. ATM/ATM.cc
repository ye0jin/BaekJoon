#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[1001] = {};
	for (int i = 0; i < n; i++) cin >> a[i];

	sort(a, a + n);
	int cnt = a[0];
	for (int i = 1; i < n; i++)
	{
		a[i] += a[i - 1];
		cnt += a[i];
	}
	cout << cnt;
	return 0;
}
