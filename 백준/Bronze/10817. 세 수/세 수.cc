#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
	int a[5] = {};
	for (int i = 0; i < 3; i++) 
	{
		cin >> a[i];
	}

	sort(a, a + 3);

	cout << a[1];
}