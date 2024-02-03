#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int m, min = 10;
	string s, ans;
	for (int i = 0; i < n; i++)
	{
		cin >> s >> m;
		if (m < min)
		{
			min = m; ans = s;
		}
	}
	cout << ans;
	return 0;
}