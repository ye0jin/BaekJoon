#include <iostream>

using namespace std;
int main()
{
	int a[10];
	for (int i = 0; i < 7; i++)
	{
		cin >> a[i];
	}

	int hap = 0, minv = 101;

	for (int i = 0; i < 7; i++)
	{
		if (a[i] % 2 == 1)
		{
			hap += a[i];
			if (minv > a[i]) minv = a[i];
		}
	}

	if (hap == 0)
	{
		cout << "-1";
		return 0;
	}

	cout << hap << '\n' << minv;

	return 0;
}