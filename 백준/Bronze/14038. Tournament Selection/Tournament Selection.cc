#include <iostream>
using namespace std;
int main()
{
	char c;
	int cnt = 0;
	for (int i = 0; i < 6; ++i)
	{
		cin >> c;
		if (c == 'W') cnt++;
	}

	switch (cnt)
	{
	case 6:
	case 5:
		cout << 1;
		break;
	case 3:
	case 4:
		cout << 2; break;
	case 1:
	case 2:
		cout << 3; break;
	default:
		cout << -1;
		break;
	}
	return 0;
}