
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
int main()
{
	string s;
	string ans[1001] = {};
	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		ans[i] = s.substr(i, s.length());
	}

	sort(ans, ans + s.length());

	for (int i = 0; i < s.length(); i++)
	{
		cout << ans[i] << '\n';
	}

	return 0;
}