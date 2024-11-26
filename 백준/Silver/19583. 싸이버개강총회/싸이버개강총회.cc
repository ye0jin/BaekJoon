#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int TimeTranslator(string time)
{
	int h = stoi(time.substr(0, 2));
	int m = stoi(time.substr(3, 5));

	return (h * 100) + m; // 만약에 23:20 일경우 2300 + 20 이니까 2322가 리턴됨
}
int main() 
{
	string s, e, q;
	cin >> s >> e >> q;

	int startT = TimeTranslator(s);
	int endT = TimeTranslator(e);
	int quitT = TimeTranslator(q);

	string time, nickname;

	unordered_set<string> enter;
	unordered_set<string> exit;
	int chatT;

	while (cin >> time >> nickname) 
	{
		chatT = TimeTranslator(time);
		if (chatT <= startT)
		{
			enter.insert(nickname);
		}
		if (chatT >= endT && chatT <= quitT)
		{
			exit.insert(nickname);
		}
	}

	int ans = 0;
	for (string nick : enter) 
	{
		if (exit.find(nick) == exit.end()) continue; // 없으면 continue
		ans++;
	}

	cout << ans;

	return 0;
}