#include <iostream>
using namespace std;
int main() {
	int n, a, hap = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a; hap += a;
	}

	if (hap > 0)
	{
		cout << "Right";
	}
	else if (hap == 0)
	{
		cout << "Stay";
	}
	else
	{
		cout << "Left";
	}
	return 0;
}