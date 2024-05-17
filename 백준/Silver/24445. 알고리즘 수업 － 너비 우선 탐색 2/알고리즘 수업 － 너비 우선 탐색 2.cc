#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> vec[100001];
int visit[100001] = { 0,};
int ans[100001] = {};
int cnt = 0;
void BFS(int x)
{
	queue<int> q;
	q.push(x);
	visit[x] = 1;
	ans[x] = ++cnt; 

	while (!q.empty()) 
	{
		int x1 = q.front();
		q.pop(); 
		int size = vec[x1].size();
		for (int i = 0; i < size; i++)
		{
			int nx = vec[x1][i];
			if (visit[nx] == 1) continue;
			
			q.push(nx);
			ans[nx] = ++cnt;
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
		sort(vec[i].begin(), vec[i].end(), greater<int>());
	}
	BFS(r);

	for (int i = 1; i <= n; i++) 
	{
		cout << ans[i] << '\n';
	}
	return 0;
}


