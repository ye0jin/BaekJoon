#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	queue<int> q;
	for (int i = 1; i <= n; i++) q.push(i);

	cout << "<";

	int current = 0;
	while(!q.empty())
	{
		for (int i = 1; i < m; i++)
		{
			q.push(q.front());
			q.pop();
		}

		if (q.size()==1)
		{
			cout << q.front();
			break;
		}
		cout << q.front() << ", ";
		q.pop();
	}

	cout << ">";

	return 0;
}