#include <iostream>
using namespace std;
int main()
{
	char a;
	int cnt = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++) 
		{
			cin >> a;
			if (a == '.') continue;
			if ((i + j) % 2 == 0) cnt++;
		}
	}
	cout << cnt;
	return 0;
}