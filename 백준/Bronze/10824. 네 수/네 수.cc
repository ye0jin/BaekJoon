#include <iostream>
#include <string>

using namespace std;
int main()
{
	string a, b, c, d;
	cin >> a >> b >> c >> d;

	a += b;
	c += d;
	long long int num = stoll(a) + stoll(c);
	cout << num;

	return 0;
}