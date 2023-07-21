#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool sort2(const pair<string, int>& a, const pair<string, int>& b)
{
	if (a.second == b.second)
	{
		if(a.first.length()==b.first.length()) return a.first < b.first;
		return a.first.length() > b.first.length();
	}
	return a.second > b.second;
}
int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, m;
	cin >> n >> m;

	map<string, int> map;

	string a;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a.length() < m) continue;

		map[a]++;
	}

	vector<pair<string, int>> vec(map.begin(), map.end());
	sort(vec.begin(), vec.end(), sort2);

	for (auto i : vec)
	{
		cout << i.first << '\n';
	}
	return 0;
}