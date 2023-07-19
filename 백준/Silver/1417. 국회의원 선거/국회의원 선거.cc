#include <iostream>
#include <queue>

using namespace std;
int main()
{
	priority_queue<int> q; // 우선순위

	int n,m, check, ans=0;
	cin >> n >> check;

	for (int i = 1; i < n; i++)
	{
		cin >> m;
		q.push(m);
	}

	if (n == 1)
	{
		cout << "0";
		return 0;
	}

	while (q.top() >= check)
	{
		int top = q.top();
		q.pop();
		ans++;
		check++;
		q.push(top - 1);
	}

	cout << ans;

	return 0;
}