#include <iostream>

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a, b, c;
	cin >> a >> b >> c;
	if (a * b - c <= 0) cout << 0;
	else cout << a * b - c;
}