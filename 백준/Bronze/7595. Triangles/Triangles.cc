#include <iostream>
using namespace std;
int main()
{
	int n;
	while (true) 
	{
		cin >> n;
		if (n == 0) return 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j <= i; j++)
			{
				cout << "*";
			}cout << '\n';
		}
	}
	return 0;
}