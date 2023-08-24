#include <iostream>
#include <map>

using namespace std;
int main()
{
	int n, cnt = 0;
	cin >> n;
	map<int, int> x;
	map<int, int> y;

	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		x[a]++;
		y[b]++;
	}
	for (auto i : x)
	{
		if (i.second >= 2) cnt++;
	}
	for (auto i : y)
	{
		if (i.second >= 2) cnt++;
	}

	cout << cnt;
	return 0;
}