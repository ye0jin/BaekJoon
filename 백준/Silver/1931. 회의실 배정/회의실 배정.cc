#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<pair<int, int>> v;
	int n, a, b;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a >> b;
		v.push_back({ b,a }); // 끝나는 시간, 시작하는 시간
	}
	
	sort(v.begin(), v.end()); // 끝나는 시간 기준으로 sort

	int cnt = 0, last = 0;

	for (int i = 0; i < n; i++)
	{
		if (v[i].second < last) continue;
		cnt++;
		last = v[i].first; // 4
	}
	cout << cnt;
	return 0;
}