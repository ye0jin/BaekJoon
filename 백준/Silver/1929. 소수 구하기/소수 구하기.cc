#include <cmath>
#include<iostream>
using namespace std;

long long int a[1000001];
int main()
{
	long long int n, m;
	cin >> n >> m;
	for (long long int i = 2; i <= m; i++)
		a[i] = i;

	for (long long int i = 2; i <= sqrt(m); i++)
	{
		if (a[i] == 0)
			continue;
		for (long long int j = i * i; j <= m; j += i)
			a[j] = 0;
	}

	for (long long int i = n; i <= m; i++)
	{
		if (a[i] == 0)
			continue;
		else
			cout << a[i] << '\n';
	}
	return 0;
}