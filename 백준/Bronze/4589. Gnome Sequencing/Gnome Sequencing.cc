
#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a, b, c;
	cout << "Gnomes:\n";
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b >> c;
		if (a > b && b > c) cout << "Ordered\n";
		else if (a < b && b < c) cout << "Ordered\n";
		else  cout << "Unordered\n";
	}
}