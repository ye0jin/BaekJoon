#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a = 0;
	string b;

	cin >> b;

	for (int i = 0; i < b.length(); i++) 
	{
		a *= 16;

		if (b[i] >= 'A' && b[i] <= 'F') a += b[i] - 'A' + 10;
		else a += b[i] - '0';
	}
	cout << a << "\n";

	return 0;
}