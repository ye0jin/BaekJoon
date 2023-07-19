#include <iostream>

using namespace std;

int main()
{
	bool check = false;

	int a[11] = {};
	int b[11] = {};

	int aHap = 0;
	int bHap = 0;

	for (int i = 0; i < 9; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < 9; i++)
	{
		cin >> b[i];

		aHap += a[i];

		if (aHap > bHap) check = true;
		bHap += b[i];
	}

	if (check)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}

	return 0;
}