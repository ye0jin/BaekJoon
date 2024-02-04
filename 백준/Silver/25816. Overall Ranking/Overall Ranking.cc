#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;
struct st
{
	int cnt;
	int hap;
};
bool cmp(const pair<string, float>& a, const pair<string, float>& b) {
	if (a.second == b.second) return a.first < b.first;
	return a.second < b.second;
}

int main() {
	int n;
	string s;
	map<string, st> m;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> s;
		++m[s].cnt;
		m[s].hap += i;
	}

	map<string, float> check;
	for (auto i : m)
	{
		float f = (float)i.second.hap / (float)i.second.cnt;
		check[i.first] = f;
	}

	vector<pair<string, float>> ans(check.begin(), check.end());
	sort(ans.begin(), ans.end(), cmp);

	for (auto i : ans)
	{
		cout << i.first << endl;
	}
	return 0;
}