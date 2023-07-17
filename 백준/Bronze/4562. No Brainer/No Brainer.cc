#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;

		if (x < y) cout << "NO BRAINS\n";
		else cout << "MMM BRAINS\n";
	}
	return 0;
}