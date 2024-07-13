
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a, b, cnta = 0, cntb = 0;

	for (int i = 0; i < n; ++i)
	{
		cin >> a >> b;
		if (a > b) cnta++;
		else if (b > a) cntb++;
	}

	cout << cnta << " " << cntb;
	return 0;
}