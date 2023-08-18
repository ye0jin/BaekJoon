#include <iostream>

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int hap = 0;
	for (int i = 0; i < 5; i++)
	{
		int a;
		cin >> a;
		if (a <= 40) a = 40;
		hap += a;
	}

	cout << hap / 5;
}