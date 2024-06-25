#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;

	for (int i = n - 5; i < n; i++)
	{
		cout << s[i];
	}
	return 0;
}