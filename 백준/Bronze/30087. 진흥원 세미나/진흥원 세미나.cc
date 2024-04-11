#include <iostream>
using namespace std;
int main()
{
	int n;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		if (s[1] == 'l') cout << "204\n";
		else if (s[0] == 'D') cout << "207\n";
		else if (s[1] == 'r') cout << "302\n";
		else if (s[0] == 'C')cout << "B101\n";
		else if (s[0] == 'N') cout << "303\n";
		else if (s[0] == 'S') cout << "501\n";
		else if (s[0] == 'T') cout << "105\n";
	}
	return 0;
}