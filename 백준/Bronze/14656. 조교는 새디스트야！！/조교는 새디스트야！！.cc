#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a, cnt = 0;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a;
		if (a != i) cnt++;
	}
	cout << cnt;
	return 0;
}