#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int a[10] = {};
	int b[10] = {};
	int ans[10] = {};
	
	int hap = 0;
	for (int i = 0; i < 8; i++)
	{
		cin >> a[i];
		b[i] = a[i];
	}
	sort(a, a + 8, greater<int>());

	for (int i = 0; i < 5; i++)
	{
		hap += a[i];
		for (int j = 0; j < 8; j++)
		{
			if (a[i] == b[j])
			{
				ans[i] = j + 1;
				break;
			}
		}
	}

	sort(ans, ans + 5);

	cout << hap << '\n';

	for (int i = 0; i < 5; i++) cout << ans[i] << " ";

	return 0;
}