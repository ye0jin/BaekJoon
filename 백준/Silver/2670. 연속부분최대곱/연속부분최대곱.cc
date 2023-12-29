
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;

	cout << fixed;
	cout.precision(3);

	double dp[10001] = {};
	for (int i = 1; i <= n; i++)
	{
		cin>>dp[i];
	}
	double ans = dp[1]; // 임의로 넣고

	for (int i = 2; i <= n; i++)
	{
		if (dp[i - 1] >= 1)
		{
			dp[i] *= dp[i - 1];
		}
		ans = max(ans, dp[i]);
	}
	cout << ans;
	return 0;
}