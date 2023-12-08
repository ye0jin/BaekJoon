#include <iostream>
using namespace std;
int main()
{
	int dp[1900000] = {};
	int n, a, b;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		dp[i + a] = max(dp[a + i], dp[i] + b);
		dp[i + 1] = max(dp[i], dp[i + 1]);
	}
	cout << dp[n];
	return 0;
}