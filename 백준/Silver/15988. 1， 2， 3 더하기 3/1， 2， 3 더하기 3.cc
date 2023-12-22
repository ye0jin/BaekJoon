#include <iostream>
#define MAX 1000001
using namespace std;
int main()
{
	int n;
	cin >> n;
	
	long long int dp[MAX] = { 1,1,2 };

	for (int i = 3; i < MAX; i++)
	{
		dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % 1000000009;
	}

	int a;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		cout << dp[a] << '\n';
	}
	return 0;
}