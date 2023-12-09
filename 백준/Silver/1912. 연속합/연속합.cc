
#include <iostream>
using namespace std;
int main()
{
	int n, a[100001] = {};
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i]; //10 -4 3 1 5 6 -35 12 21 -1
	}
	
	int dp[100001] = {0, };
	int ans = -1001;

	for (int i = 0; i < n; i++)
	{
		dp[i] = max(a[i], dp[i - 1] + a[i]); // 1이면 
		ans = max(ans, dp[i]);//갱신
	}
	cout << ans;
}