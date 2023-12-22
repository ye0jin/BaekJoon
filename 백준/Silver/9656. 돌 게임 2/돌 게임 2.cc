#include <iostream>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
	int n;
	cin >> n;
	int dp[10001] = {0,0,1,0};

	for (int i = 4; i <= n; i++)
	{
		if (dp[i - 1] == 0 || dp[i - 3] == 0) dp[i] = 1;  // 상근이쪽
		else dp[i] = 0;//
	}

	if (dp[n] == 1) cout << "SK";
	else cout << "CY";
	return 0;
}