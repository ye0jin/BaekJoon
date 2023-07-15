#include <iostream>

using namespace std;
int main()
{
	string s;
	cin >> s;
	int a[1000] = {};

	for (int i = 0; i < s.length(); i++)
	{
		int v = s[i];
		a[v]++;
	}

	for (int i = 97; i <= 122; i++)
	{
		cout << a[i] << " ";
	}

	return 0;
}