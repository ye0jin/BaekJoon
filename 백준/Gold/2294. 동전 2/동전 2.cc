#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;
    long long int a[10001] = {};
    long long int dp[10001] = {0,};

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    fill_n(dp + 1, 10000, 10001);
    dp[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = a[i]; j <= k; j++)
        {
            dp[j] = min(dp[j], 1 + dp[j - a[i]]);
        }
    }

    if (dp[k] == 10001)
        dp[k] = -1;

    cout << dp[k];

    return 0;
}
