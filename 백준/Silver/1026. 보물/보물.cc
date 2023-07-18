#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
	int n;
	cin >> n;

	int a[51] = {}, b[51] = {};

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}

	sort(a, a + n);
	sort(b, b + n, greater<int>());

	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		int g = a[i] * b[i];
		cnt += g;
	}

	cout << cnt;

	return 0;
}