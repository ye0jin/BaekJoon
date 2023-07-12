#include <iostream>

using namespace std;
int main()
{
	int a, b, c;
	int m = 0;
	while (true)
	{
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c==0) return 0;

		a *= a;
		b *= b;
		c *= c;

		if (a + b == c) cout << "right\n";
		else if (c + b == a) cout << "right\n";
		else if (a + c == b) cout << "right\n";
		else cout << "wrong\n";
	}
	return 0;
}