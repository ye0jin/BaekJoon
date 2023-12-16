#include <iostream>
using namespace std;
int main()
{
	int h, w;
	cin >> w >> h;
	cout << fixed;
	cout.precision(1);
	cout << w * h * 0.5f;
	return 0;
}