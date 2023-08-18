#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n, m;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int a[51] = {};
		cin >> m;
		int min=101, max=-1;
		for (int j = 0; j < m; j++)
		{
			cin >> a[j];
			if (a[j] < min) min = a[j];
			if (a[j] > max) max = a[j];
		}

		sort(a, a + m);
		int gap = -1;
		for (int j = 1; j < m; j++)
		{
			if (gap < a[j] - a[j - 1]) gap = a[j] - a[j - 1];
		}

		cout << "Class " << i << '\n';
		cout << "Max " << max;
		cout << ", Min " << min;
		cout << ", Largest gap " << gap << '\n';
	}
	return 0;
}