#include <iostream>

using namespace std;
int main()
{
	int a[5][5] = {};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		int cnt = 0;
		for (int j = 0; j < 4; j++)
		{
			if (a[i][j] == 0) cnt++;
		}
		switch (cnt)
		{
		case 1: 
			cout << "A\n"; break;
		case 2:
			cout << "B\n"; break;
		case 3:
			cout << "C\n"; break;
		case 4: 
			cout << "D\n"; break;
		default:
			cout << "E\n";
			break;
		}
	}
	return 0;
}