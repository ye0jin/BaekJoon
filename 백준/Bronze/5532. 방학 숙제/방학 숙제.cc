#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a, b;
	cin >> a >> b;
	int maxa, maxb;
	cin >> maxa >> maxb;

	int cnt = 0;

	for (int i = 0; i < 40; i++)
	{
		if (a <= 0 && b <= 0)
		{
			cout << n - cnt;
			return 0;
		}
		cnt++;
		a -= maxa;
		b -= maxb;
	}

	return 0;
}