#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a[10] = {};
	int b[10] = {};

	for (int i = 0; i < 4; i++) cin >> a[i];
	for (int i = 0; i < 2; i++) cin >> b[i];

	sort(a, a + 4, greater<int>());
	sort(b, b + 2, greater<int>());

	int hap = 0;
	for (int i = 0; i < 3; i++) hap += a[i];
	hap += b[0];
	cout << hap;
}