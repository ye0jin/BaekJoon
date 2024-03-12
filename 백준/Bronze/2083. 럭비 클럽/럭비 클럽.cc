#include <iostream>
using namespace std;
int main()
{
	string a;
	int b, c;

	while (true)
	{
		cin >> a >> b >> c;
		if (a == "#" && b == 0 && c == 0) return 0;
		cout << a << " ";
		if (b > 17) cout << "Senior";
		else if (c >= 80) cout << "Senior";
		else cout << "Junior";
		cout << '\n';
	}
	return 0;
}