#include <iostream>

using namespace std;
int main()
{
	int a[7] = {};
	for (int i = 0; i < 6; i++)
	{
		int b;
		cin >> b;
		a[i] = b;
	}
	
	cout << 1 - a[0] << " ";
	cout << 1 - a[1] << " ";
	cout << 2 - a[2] << " ";
	cout << 2 - a[3] << " ";
	cout << 2 - a[4] << " ";
	cout << 8 - a[5];

	return 0;
}