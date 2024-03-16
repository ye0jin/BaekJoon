#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string a;
	int b;
	int n;
	cin >> n;

	int ans[21] = {};
	for (int i = 0; i < n; ++i)
	{
		cin >> a;

		if (a == "all")
		{
			for (int j = 1; j <= 20; ++j) ans[j] = 1;
			continue;
		}
		else if (a == "empty")
		{
			for (int j = 1; j <= 20; ++j) ans[j] = 0;
			continue;
		}
		cin >> b;
		if (a == "add")
		{
			ans[b] = 1;
		}
		else if (a == "remove")
		{
			ans[b] = 0;
		}
		else if (a == "check")
		{
			cout << ans[b] << '\n';
		}
		else if (a == "toggle")
		{
			if (ans[b] == 1) ans[b] = 0;
			else ans[b] = 1;
		}
	}
	return 0;
}