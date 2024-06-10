#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int cnt = 0, a, ans = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a == 1)
		{
			ans += ++cnt;
		}
		else cnt = 0;
	}
	cout << ans;
	return 0;
}