// 프린터 큐

#include <iostream>
#include <queue>

using namespace std;
struct st
{
	int x, y;
};

int main()
{
	int a, b, n, m;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		int	 ans=0;
		
		queue<st> q;
		priority_queue<int> checkq;

		cin >> n >> m;

		for (int j = 0; j < n; j++)
		{
			cin >> b;
			q.push({ j,b }); // 중요도 / 이름
			checkq.push(b); // 우선순위 정렬
		}

		while (!q.empty())
		{
			int v1 = q.front().x;
			int v2 = q.front().y;

			q.pop();

			if (checkq.top() == v2)
			{
				checkq.pop();
				++ans;
				if (m == v1)
				{
					cout << ans << endl;
					break;
				}
			}
			else
			{
				q.push({ v1,v2 });
			}
		}
	}
	return 0;
}