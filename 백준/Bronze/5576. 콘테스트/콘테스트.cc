#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
	int a[11] = {};
	int b[11] = {};

	for (int i = 0; i < 10; i++) cin >> a[i];
	for (int i = 0; i < 10; i++) cin >> b[i];

	sort(a, a + 10, greater<int>());
	sort(b, b + 10, greater<int>());

	int acnt = a[0] + a[1] + a[2];
	int bcnt = b[0] + b[1] + b[2];

	cout << acnt << " " << bcnt;
	return 0;
}