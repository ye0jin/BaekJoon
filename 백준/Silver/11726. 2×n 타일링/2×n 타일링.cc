
#include <iostream>
using namespace std;
int main()
{
	int n, dp[10001] = {0,1,2 };
	cin >> n;
	for (int i = 3; i <= n; i++)
	{
		dp[i] = (dp[i - 1] + dp[i - 2])%10007;
	}
	cout << dp[n];
}
