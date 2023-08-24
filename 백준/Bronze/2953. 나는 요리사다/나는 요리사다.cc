#include <iostream> 
using namespace std;
int main()
{
	int max = 0, ans;
	for (int i = 0; i < 5; i++)
	{
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		int hap = a + b + c + d;
		if (hap > max)
		{
			max = hap;
			ans = i + 1;
		}
	}

	cout << ans << " " << max;
	return 0;
}