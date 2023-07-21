#include <iostream>
#include <set>

using namespace std;
int main()
{
	int n, cnt = 0;
	set<string> set;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;

		if (s == "ENTER")
		{
			cnt += set.size();
			set.clear();
		}
		else set.insert(s);
	}

	cnt += set.size();
	cout << cnt;
	return 0;
}