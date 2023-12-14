#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n;
	long long int dp[100001] = { 0,1,2,2,3,3,6, };
	for (int j = 0; j < n; j++)
	{
		cin >> m;
		for (int i = 7; i <= m; i++)
		{
			dp[i] = (dp[i - 2] + dp[i - 4] + dp[i - 6]) % 1000000009;
		}
		cout << dp[m] << '\n';
	}
	
	return 0;
}