#include <iostream>
using namespace std;
int main()
{
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] >= 65 && s[i] <= 90) cout << s[i];
	}
	return 0;
}