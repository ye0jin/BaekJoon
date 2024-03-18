#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n * 2 - 1; i++)
	{
		int cnt = 0;
		for (int j = 0; j < abs(n -1 - i); j++)
		{
			cnt++;
			cout << " ";
		}
		for (int j = 0; j < n - cnt; j++) cout << "*";
		cout << endl;
	}
	return 0;
}