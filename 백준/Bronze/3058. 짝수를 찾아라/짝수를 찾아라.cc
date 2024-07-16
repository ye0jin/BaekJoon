#include <iostream>
using namespace std;

int main()
{
	int n, a, ans;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		ans = 0;
		int min = 99999;
		for (int j = 0; j < 7; j++)
		{
			cin >> a;
			
			if (a % 2 == 0) 
			{
				if (a < min) min = a;
				ans += a;
			}
		}

		cout << ans << " " << min << "\n";
	}
}