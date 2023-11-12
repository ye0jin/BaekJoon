
#include <iostream>

using namespace std;
int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d; // 순서대로 시 / 분 / 초 / 걸리는시

	int v1 = (c + d) % 60;
	int v2 = (b + ((c + d) / 60)) % 60;
	int v3 = (a + (b + (c + d) / 60) / 60) % 24;

	cout << v3 <<' ' << v2 << ' ' << v1;
	return 0;
}