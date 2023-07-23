#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool sort2(const pair<string, int>& a, const pair<string, int>& b)
{
	if (a.second == b.second)
	{
		return a.first > b.first;
	}
	return a.second > b.second;
}
int main()
{
	int n;
	cin >> n;

	map<string, int> m;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		m[s]++;
	}
	vector<pair<string, int>> vec(m.begin(), m.end());
	sort(vec.begin(), vec.end(), sort2);


	for (auto i : vec)
	{
		cout << i.first << " " << i.second;
		return 0;
	}
	return 0;
}