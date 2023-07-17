#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
	int a, b, n;
	char c;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		scanf("%1d", &a);
		scanf("%c", &c);
		scanf("%1d", &b);

		cout << a + b << '\n';
	}

	return 0;
}