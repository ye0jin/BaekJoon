#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	if (a >= b && c >= b) cout << a + c;
	else if (b >= a && c >= a) cout << b + c;
	else cout << a + b;
	return 0;
}