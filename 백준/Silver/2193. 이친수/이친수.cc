
#include <iostream>
using namespace std;
int main()
{
	int n;
	long long int a[1001] = { 0,1,1 };
	cin >> n;
	
	for (int i = 3; i <= n; i++)
	{
		a[i] = a[i - 2] + a[i - 1];
	}
	cout << a[n];
	return 0;
}