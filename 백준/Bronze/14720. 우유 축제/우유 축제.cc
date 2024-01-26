#include <iostream>
using namespace std;
int main()
{
	int a[1001] = {};
	int n,check =0,ans=0;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++)
	{
		if (check == 0 && a[i] == 0)
		{
			check = 1; ans++;
		}
		else if (check == 1 && a[i] == 1)
		{
			check = 2; ans++;
		}
		else if (check == 2 && a[i] == 2)
		{
			check = 0; ans++;
		}
	}
	cout << ans;
	return 0;
}