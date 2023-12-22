#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int dp[1001] = { 0,1,0,1,1,1 };

	for (int i = 6; i <= n; i++)
	{
		if (dp[i - 1] == 0 || dp[i - 3] == 0 || dp[i - 4] == 0) dp[i] = 1; 
		else dp[i] = 0;//
	}

	if (dp[n] == 1) cout << "SK";
	else cout << "CY";
	return 0;
}