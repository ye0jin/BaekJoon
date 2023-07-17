
#include <iostream>
#include <string>

using namespace std;
int main()
{
	string s;
	int n;
	cin >> n;

	cin.ignore();

	for (int i = 0; i < n; i++)
	{
		int cnt1 = 0, cnt2 = 0;
		getline(cin, s);
		for (int j = 0; j < s.length(); j++)
		{
			s[j] = towlower(s[j]);
			if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
			{
				cnt1++;
			}
			else if (s[j] != ' ')
			{
				cnt2++;
			}
		}

		cout<<cnt2<<" ";
		cout << cnt1 << '\n';
	}
	
	return 0;
}