#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false); 
cin.tie(NULL); 
cout.tie(NULL);
	int n;
	cin >> n;
	int a[10001] = {};
	for (int i = 0; i < n; i++)
	{
		int b = 0;
		cin >> b;
		a[b]++;
	}
	for (int i = 0; i < 10001; i++)
	{
		while (a[i] != 0)
		{
			cout << i << '\n';
			--a[i];
		}
	}
	return 0;
}