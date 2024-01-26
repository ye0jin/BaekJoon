#include <iostream>
using namespace std;
int main()
{
	string a, b;
	cin >> a >> b;
	int ans[1001][1001];
	for (int i = 1; i <=a.length(); i++)
	{
		for (int j = 1; j <= b.length(); j++)
		{
			if (a[i - 1] == b[j - 1]) 
			{

				ans[i][j] = ans[i - 1][j - 1] + 1;
			}
			else 
			{
				ans[i][j] = max(ans[i - 1][j], ans[i][j - 1]);
			}
		}
	}
	cout << ans[a.length()][b.length()];
	return 0;
}