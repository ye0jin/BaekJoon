#include <iostream>
#include <vector>

using namespace std;
int n;
int visit[100001], ans[100001];
vector<int> vec[100001];

void check(int v)
{
	visit[v] = 1;
	for (int i = 0; i < vec[v].size(); i++)
	{
		int a = vec[v][i];
		if (visit[a] == 0)
		{
			ans[a] = v;
			check(a);
		}
	}
}
int main()
{
	cin >> n;
	for (int i = 0; i < n - 1; i++)
	{
		int v1, v2;
		cin >> v1 >> v2;
		vec[v1].push_back(v2);
		vec[v2].push_back(v1);
	}

	check(1);
	for (int i = 2; i <= n; i++)
	{
		cout << ans[i] << '\n';
	}
	return 0;
}