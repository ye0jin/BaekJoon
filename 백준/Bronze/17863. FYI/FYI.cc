
#include <iostream>
using namespace std;
int main()
{
	string s;
	cin >> s;

	string ans = "YES";
	for (int i = 0; i < 3; ++i)
	{
		if (s[i] != '5') ans = "NO";
	}
	cout << ans;
	return 0;
}