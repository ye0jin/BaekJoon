#include <iostream>
using namespace std;
int main()
{
	float ans = 0;
	string a;
	cin >> a;
	switch (a[0])
	{
	case 'A':
		ans = 4;
		break;
	case 'B':
		ans = 3;
		break;
	case 'C':
		ans = 2;
		break;
	case 'D':
		ans = 1;
		break;
	default:
		break;
	}
	switch (a[1])
	{
	case '+':
		ans += 0.3f;
		break;
	case '-':
		ans -= 0.3f;
		break;
	default:
		break;
	}
	cout << fixed;
	cout.precision(1);
	cout << ans;
	return 0;
}