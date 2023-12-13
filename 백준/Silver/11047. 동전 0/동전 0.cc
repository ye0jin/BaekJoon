#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> vec;

	int a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		vec.push_back(a);
	}

	sort(vec.begin(), vec.end(), greater<int>());
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (m < vec[i]) continue;
		ans += m / vec[i]; // 4200 / 1000
		m %= vec[i];
	}
	cout << ans;
	return 0;
}