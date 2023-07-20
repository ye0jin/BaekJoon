#include <iostream>

using namespace std;
int main()
{
	int s = 0, t = 0;
	for (int i = 0; i < 4; i++)
	{
		int a;
		cin >> a;
		s += a;
	}
	for (int i = 0; i < 4; i++)
	{
		int a;
		cin >> a;
		t += a;
	}
	if (s >= t) cout << s;
	else if (s < t) cout << t;
	return 0;
}