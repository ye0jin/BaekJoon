#include <iostream>

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int hap = 0;
	for (int i = 0; i < 4; i++)
	{
		int a;
		cin >> a;
		hap += a;
	}

	cout << hap / 60 <<endl;
	cout << hap % 60;
}