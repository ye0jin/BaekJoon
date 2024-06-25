#include <iostream>
using namespace std;
int main()
{
	int a[3] = {}, cnt = 0;
	for (int i = 0; i < 3; i++) {
		cin >> a[i];
	}

	int b;
	for (int i = 0; i < 3; i++)
	{
		cin >> b;
		if (b > a[i]) cnt += b - a[i];
	}

	cout << cnt;

	return 0;
}