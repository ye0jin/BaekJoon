#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	long long int dp[100001] = { 0, -1, 1, -1, 2, 1, 3, 2, 4, 3, 2 };
	for (int i = 10; i <= n; i++)
	{
		dp[i] = min(dp[i - 2] + 1, dp[i - 5]+ 1);
	}
	cout << dp[n];
	return 0;
}