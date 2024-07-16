#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int r, e, c;
	for (int i = 0; i < n; ++i)
	{
		cin >> r >> e >> c;
		e -= c;
		if (r > e) cout << "do not advertise\n";
		else if (r == e) cout << "does not matter\n";
		else cout << "advertise\n";
	}
	return 0;
}