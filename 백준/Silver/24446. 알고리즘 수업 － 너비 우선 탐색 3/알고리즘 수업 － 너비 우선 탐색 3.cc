#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> vec[100001];
int visit[100001] = { 0,};
int ans[100001] = {};

struct st 
{
	int x, cnt;
};
void BFS(int x)
{
	queue<st> q;
	q.push({ x,0 });
	visit[x] = 1;
	ans[x] = q.front().cnt;

	while (!q.empty()) 
	{
		int x1 = q.front().x;
		int cnt1 = q.front().cnt;
		q.pop(); 

		int size = vec[x1].size();
		for (int i = 0; i < size; i++)
		{
			int nx = vec[x1][i];
			if (visit[nx] == 1) continue;
			
			q.push({ nx,cnt1 + 1 });
			ans[nx] = cnt1 + 1;
			visit[nx] = 1;
		}
	}
}
int main()
{
	int n, m, r;
	cin >> n >> m >> r;
	int a, b;
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		vec[a].push_back(b);
		vec[b].push_back(a);
	}
	for (int i = 1; i <= n; i++) 
	{
		sort(vec[i].begin(), vec[i].end());
	}
	BFS(r);

	for (int i = 1; i <= n; i++) 
	{
		if (visit[i] == 0) cout << "-1\n";
		else cout << ans[i] << '\n';
	}
	return 0;
}


