#include <iostream>

using namespace std;
int main()
{
	int n;
	string a;
	string ans[101] = {};
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		for (int j = a.length() - 1; j >= 0; j--)
		{
			ans[i] += a[j];
		}
		if (ans[i] == a)
		{
			cout << a.length() << ' ';
			int l = (a.length() / 2);
			cout << a[l];
			return 0;
		}

		for (int j = 0; j < i; j++)
		{
			if (ans[j] == a)
			{
				cout << a.length() << ' ';
				int l = (a.length() / 2);
				cout << a[l];
				return 0;
			}
		}
	}
	return 0;
}