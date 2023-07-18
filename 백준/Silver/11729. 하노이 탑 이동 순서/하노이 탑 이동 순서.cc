#include <iostream>
#include <cmath>

using namespace std;

void check(int from, int to, int change, int n)
{
	if (n == 1) cout << from << " " << to << '\n';
	else
	{
		check(from, change, to, n - 1);
		cout << from << " " << to << '\n';
		check(change, to, from, n - 1);
	}
}
int main()
{
	int n;
	cin >> n;

	int ans = pow(2, n) - 1;
	cout << ans << '\n';
	check(1, 3, 2, n);
	return 0;
}