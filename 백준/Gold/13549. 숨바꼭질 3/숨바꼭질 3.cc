#include <iostream>
#include <queue>

using namespace std;

int n, m;
int visit[100050] = {};

struct st
{
	int x, cnt;
};
void check(int v)
{
	queue<st> q;
	q.push({ v,0 });
	visit[v] = 1;

	while (!q.empty())
	{
		int x1 = q.front().x;
		int cnt1 = q.front().cnt;

		q.pop();
		if (x1 == m)
		{
			cout << cnt1;
			break;
		}

		// x+1, x-1, x*2
		int v1 = x1 + 1;
		int v2 = x1 - 1;
		int v3 = x1 * 2;

		if (v3 >= 0 && v3 <= 100000 && visit[v3] == 0)
		{
			visit[v3] = 1;
			q.push({ v3,cnt1 });
		}
		if(v2 >= 0 && v2 <= 100000 && visit[v2] == 0)
		{
			visit[v2] = 1;
			q.push({ v2,cnt1 + 1 });
		}
		if (v1 >= 0 && v1 <= 100000 && visit[v1] == 0)
		{
			visit[v1] = 1;
			q.push({ v1,cnt1 + 1 });
		}
		
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	check(n);
	return 0;
}