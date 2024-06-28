#include <iostream>
using namespace std;
int main()
{
	int n;
	int a, b;
	cin >> n >> a >> b;

	int cnt = 0;
	for (int i = 0; i < n; ++i)
	{
		if (a - 2 >= 0)
		{
			cnt++;
			a -= 2;
		}
		else if (b - 1 >= 0)
		{
			cnt++;
			b -= 1;
		}
		else 
		{
			cout << cnt;
			return 0;
		}
	}
	cout << cnt;
	return 0;
}