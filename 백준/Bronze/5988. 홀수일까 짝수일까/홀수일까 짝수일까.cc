#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;

	string s;
	int check = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> s;
		check = s[s.length() - 1] - '0';
		if (check % 2 == 0) cout << "even\n";
		else cout << "odd\n";
	}
	return 0;
}