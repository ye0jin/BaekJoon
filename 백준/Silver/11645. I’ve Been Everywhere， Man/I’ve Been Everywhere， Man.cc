#include <iostream>
#include <set>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int m;
	string s;
	set<string> set;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		for (int j = 0; j < m; j++)
		{
			cin >> s;
			set.insert(s);
		}
		cout << set.size() << '\n';

		set.clear();
	}
}