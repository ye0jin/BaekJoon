#include <iostream>

using namespace std;
int main()
{
	int m, f;
	while (true)
	{
		cin >> m >> f;
		if (m == 0 && f == 0) return 0;
		cout << m + f << '\n';
	}
	return 0;
}