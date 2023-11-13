#include<iostream>

using namespace std;
int main()
{
	int a, b, c, d, e, f;
	int v1, v2, v3;
	for (int i = 0; i < 3; i++)
	{
		cin >> a >> b >> c >> d >> e >> f;
		int time = ((d * 3600) + (e * 60) + f) - ((a * 3600) + (b * 60) + c);
		v1 = time / 3600;
		v2 = (time % 3600) / 60;
		v3 = (time % 3600) % 60;
		cout << v1 << ' ' << v2 << ' ' << v3 << '\n';
	}
	return 0;
}
