#include <iostream>
using namespace std;
int main()
{
	int dp[1000001] = { 0 };
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		dp[i] = 1 + dp[i - 1];
		if (i % 3 == 0)
		{
			dp[i] = min(dp[i], dp[i / 3] + 1);
		}
		if (i % 2 == 0)
		{
			dp[i] = min(dp[i], dp[i / 2] + 1);
		}
	}
	cout << dp[n];
	return 0;
}