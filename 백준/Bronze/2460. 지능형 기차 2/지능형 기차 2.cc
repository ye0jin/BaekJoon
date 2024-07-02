#include <iostream>
using namespace std;
int main()
{
	int cnt = 0, max = 0;
	int a, b;
	for (int i = 0; i < 10; ++i)
	{
		cin >> a >> b;
		cnt = cnt + b - a;

		if (cnt > max) max = cnt;
	}

	cout << max;

	return 0;
}