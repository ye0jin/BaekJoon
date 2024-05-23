
#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int a = m - n;

	if (a <= 0) cout << "Congratulations, you are within the speed limit!";
	else if (a > 0 && a <= 20) cout << "You are speeding and your fine is $100.";
	else if (a > 20 && a <= 30) cout << "You are speeding and your fine is $270.";
	else cout << "You are speeding and your fine is $500.";
	return 0;
}