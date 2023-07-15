#include <iostream>
#include <string>

using namespace std;
int main()
{
	string s;
	string ans = "";

	cin >> s;
	for(int i = s.length() - 1; i >=0; i--)
	{
		ans += s[i];
	}

	if (ans == s) cout << 1;
	else cout << 0;

	return 0;
}