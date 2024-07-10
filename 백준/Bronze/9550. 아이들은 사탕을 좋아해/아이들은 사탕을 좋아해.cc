#include <iostream>
using namespace std;
int main()
{
	int n, k, m;
	int cnt = 0, a;

	cin >> n;
	for (int i = 0; i < n;++i)
	{
		cnt = 0;
		cin >> m >> k;
		for (int j = 0; j < m; j++)
		{
			cin >> a;
			while (true)
			{
				if (a < k) break;
				a -= k; cnt++;
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}