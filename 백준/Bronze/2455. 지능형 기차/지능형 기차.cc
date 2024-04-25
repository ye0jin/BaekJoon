#include <iostream>
using namespace std;
int main()
{
	int a, b, max = -1, cnt = 0;
	for (int i = 0; i < 4; i++)
	{
		cin >> a >> b;
		cnt = cnt - a + b;
		if (cnt > max) max = cnt;
	}
	cout << max;
	return 0;
}