#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; j++)
		{
			if (i >= j)
			{
				cout << "*";
			}
			else cout << " ";
		}

		for (int j = n- 1; j >= 0; j--)
		{
			if (i>=j)
			{
				cout << "*";
			}
			else cout << " ";
		}
		cout << '\n';
	}

	for (int i = n - 2; i >= 0; --i)
	{
		for (int j = 0; j < n; j++)
		{
			if (i >= j)
			{
				cout << "*";
			}
			else cout << " ";
		}

		for (int j = n - 1; j >= 0; j--)
		{
			if (i >= j)
			{
				cout << "*";
			}
			else cout << " ";
		}
		cout << '\n';
	}
	return 0;
}