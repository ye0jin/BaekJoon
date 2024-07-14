#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n;
	string a, sans;
	int b, ians = -1;
	
	for (int i = 0; i < n; ++i)
	{
		ians = -1;
		cin >> m;
		for (int j = 0; j < m; ++j)
		{
			cin >> a >> b;
			if (b > ians)
			{
				ians = b;
				sans = a;
			}
		}

		cout << sans << '\n';

	}
	return 0;
}