#include <iostream>
using namespace std;
int main()
{
	int dp[41] = { 1,1 };
	
	for (int i = 2; i <= 40; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	int n, v;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> v;
		if (v == 0)
		{
			cout << "1 0\n";
			continue;
		}
		if (v == 1) 
		{
			cout << "0 1\n";
			continue;
		}

		cout << dp[v - 2] << " " << dp[v - 1] << '\n';
	}
	return 0;
}