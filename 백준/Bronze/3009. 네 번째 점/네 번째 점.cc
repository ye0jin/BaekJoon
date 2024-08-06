#include <iostream>
using namespace std;
int main()
{
	int x1, x2, x3;
	int y1, y2, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	int ans1, ans2;
	if (x1 == x2) ans1 = x3;
	else if (x1 == x3) ans1 = x2;
	else ans1 = x1;

	if (y1 == y2) ans2 = y3;
	else if (y1 == y3) ans2 = y2;
	else ans2 = y1;

	cout << ans1 << " " << ans2;
}