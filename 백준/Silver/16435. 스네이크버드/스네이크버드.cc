#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int a[1001] = {};
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);

	for (int i = 0; i < n; i++)
	{
		if (a[i] <= m) m++;
	}

	cout << m;
	return 0;
}