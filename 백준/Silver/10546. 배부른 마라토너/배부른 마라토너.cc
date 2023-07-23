#include <iostream>
#include <map>

using namespace std;
int main()
{
	int n;
	string a;
	cin >> n;

	map<string, int> map;

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		map[a]++;
	}

	for (int i = 0; i < n - 1; i++)
	{
		cin >> a;
		map[a]--;
	}

	for (auto i : map)
	{
		if (i.second <= 0) continue;
		cout << i.first;
		return 0;
	}

	return 0;
}