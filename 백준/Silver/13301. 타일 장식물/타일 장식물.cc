#include <iostream>
using namespace std;
int main()
{
	long long n;
	cin >> n; 
	long long dp[100] = { 0,1,1 };
	for (int i = 3; i < 81; i++)
	{
		dp[i] = dp[i - 2] + dp[i - 1];
	}

	long long ans = dp[n] * 2 + (dp[n] + dp[n - 1]) * 2;
	cout << ans;

	return 0;
}