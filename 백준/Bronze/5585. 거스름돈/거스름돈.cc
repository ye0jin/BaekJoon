#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	n = 1000 - n;
	int cnt = 0;
	int a[10] = { 500,100,50,10,5,1 };
	for (int i = 0; i < 6; i++)
	{
		if (n < a[i]) continue;
		cnt += n / a[i];
		n %= a[i];
	}
	cout << cnt;
	return 0;
}