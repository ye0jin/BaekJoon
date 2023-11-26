#include <iostream>
#include <map>
using namespace std;

int main()
{
	int a, b, g;
	cin >> a >> b >> g;

	int cnta = 0, cntb = 0;
	map<string, char> team;
	
	string input;
	for (int i = 0; i < a; i++)
	{
		cin >> input;
		team[input] = 'a';
	}

	for (int i = 0; i < b; i++)
	{
		cin >> input;
		team[input] = 'b';
	}

	for (int i = 0; i < g; i++)
	{
		cin >> input;
		team[input] == 'a' ? cnta++ : cntb++;
	}

	if (cnta > cntb) cout << 'A';
	else if (cntb > cnta) cout << 'B';
	else cout << "TIE";
	return 0;
}