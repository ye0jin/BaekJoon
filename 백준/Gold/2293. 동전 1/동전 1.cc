
#include <iostream>

using namespace std;
int main()
{
	int n, m, a[1001] = {};
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i]; // 동전 가치
	}
	int dp[100001] = { 1, };
	for (int i = 0; i < n; i++)
	{
		for (int j = a[i]; j <= m; j++) //동전 가치부터
		{
			dp[j] = dp[j] + dp[j - a[i]];
		}

	}
	cout << dp[m] << '\n';
	return 0;
}