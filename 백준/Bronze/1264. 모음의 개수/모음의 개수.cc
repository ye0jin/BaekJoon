#include <iostream>
#include <string>

using namespace std;
int main()
{
	while (true)
	{
		string s;
		getline(cin, s);
		if (s == "#") return 0;

		int cnt = 0;
		for (int i = 0; i < s.length(); i++)
		{
			s[i] = towlower(s[i]);
			if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
			{
				cnt++;
			}
		}

		cout << cnt << '\n';
	}

	return 0;
}