#include <iostream>

using namespace std;
int main()
{
	int a1, a2, a3;
	int b1, b2, b3;
	int c1, c2, c3;
	
	cin >> a1 >> a2 >> a3;
	cin >> c1 >> c2 >> c3;

	b1 = c1 - a3;
	b2 = c2 / a2;
	b3 = c3 - a1;

	cout << b1<<" " << b2 <<" " << b3;
	return 0;
}