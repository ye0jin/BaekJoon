#include <iostream>
#include <set>
using namespace std;
int main()
{
	int n;
	string input;
	char game;
	set<string> s;

	cin >> n >> game;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		s.insert(input);
	}

	switch (game)
	{
	case 'Y': // 윷놀이
		cout << s.size();
		break;
	case 'F': // 같은 그림
		cout << s.size() / 2;
		break;
	case 'O': // 원카드
		cout << s.size() / 3;

		break;
	}

	return 0;
}