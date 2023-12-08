
#include <iostream>
using namespace std;
int main()
{
	long long int t, n;
	cin >> t;
	long long int dp[101] = { 0,1,1,1,};

	for (int i = 4; i < 101; i++)
	{
		dp[i] = dp[i - 2] + dp[i - 3];
	}
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		cout << dp[n] << '\n';
	}
	return 0;
}