#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i <= 30; i++)
	{
		int check = pow(2, i);
		if (check == n)
		{
			cout << "1";
			return 0;
		}
	}

	cout << "0";
	return 0;
}