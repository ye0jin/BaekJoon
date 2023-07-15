#include <iostream>

using namespace std;


void star(int i , int j, int n)
{
	if (n == 1)
	{
		cout << "*";
		return;
	}
	else if ((i/(n/3)) % 3 == 1 && (j / (n / 3)) % 3 == 1) // 3, 3
	{
		cout << " ";
	}
	else
	{
		return star(i, j, n / 3);
	}
}
int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) star(i, j, n);
		cout << '\n';
	}

	return 0;
}