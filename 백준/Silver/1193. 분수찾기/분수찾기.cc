#include <iostream>

using namespace std;
int main()
{
	int n, i=1;
	cin >> n;
	while (i < n)
	{
		n -= i++;
	}
	if (i % 2 == 0) {
		cout << n << "/" << 1 + i - n;
	}
	else {
		cout << 1 + i - n << "/" << n;
	}
	return 0;
}