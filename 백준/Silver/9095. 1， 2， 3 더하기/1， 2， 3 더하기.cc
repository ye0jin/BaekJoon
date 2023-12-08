#include <iostream>
using namespace std;
int main()
{
	int n,m;
	cin >> n;
	int dp[100001] = {0,1,2,4};

	for (int i = 4; i < 12; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		cout << dp[m] << '\n';
	}
	return 0;
}