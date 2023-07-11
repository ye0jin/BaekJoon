#include <iostream>
#include <deque>

using namespace std;
int main()
{
	deque<int> d;
	int n, m, cnt = 0;
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		d.push_back(i); // 1~n 까지 순서대로
	}

	int a, idx = 0;
	while (m--)
	{
		cin >> a;
		for (int i = 0; i < d.size(); i++)
		{
			if (d[i] == a)
			{
				idx = i;
				break;
			}
		}

		if (idx <= d.size() / 2) // 2
		{
			while (true)
			{
				if (a == d.front())
				{
					d.pop_front();
					break;
				}
				d.push_back(d.front());
				d.pop_front();

				cnt++;
			}
		}
		else
		{
			while (true)
			{
				if (a == d.front())
				{
					d.pop_front();
					break;
				}
				d.push_front(d.back());
				d.pop_back();

				cnt++;
			}
		}
	}
	cout << cnt;

	return 0;
}