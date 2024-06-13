#include <iostream>
using namespace std;
int main()
{
	int n, a, b, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a >> b;
		while (true)
		{
			if (a > b) break;
			b -= a;
		}
		cnt += b;
	}
	cout << cnt;
	return 0;
}