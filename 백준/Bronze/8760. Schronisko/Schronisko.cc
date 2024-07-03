#include <iostream>
using namespace std;
int main()
{
	int n, a, b;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> a >> b;
		if (a * b < 2) cout << "0\n";
		else cout << a * b / 2 << '\n';
	}
}