#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a[10] = {};
	int cnt = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
		cnt += a[i];
	}

	sort(a, a + 5);

	cout << cnt / 5 << '\n';
	cout << a[2];

	return 0;
}