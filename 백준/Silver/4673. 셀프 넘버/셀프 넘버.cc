#include <iostream>

using namespace std;

int a[10001] = {};

long long int f(long long int v)
{
	long long int r = v;
	while (true)
	{
		if (v == 0) break;
		r += v % 10;
		v /= 10;
	}

	return r;
}
int main()
{
	for (int i = 0; i < 10000; i++)
	{
		long long int v = f(i);
		if (v < 10000) a[v] = 1;
	}

	for (int i = 0; i < 10000; i++)
	{
		if (a[i] == 0) cout << i << '\n';
	}
	return 0;
}