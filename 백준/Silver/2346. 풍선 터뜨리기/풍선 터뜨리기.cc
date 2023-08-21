#include <iostream>
#include <deque>

using namespace std;

struct st
{
	int a, b;
};
int main()
{
	int n;
	deque<st> d;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int a;
		cin >> a;
		d.push_back({ a,i });
	}

	while (!d.empty())
	{
		int a1 = d.front().a;
		int b1 = d.front().b;
		d.pop_front();

		cout << b1 << ' ';
		if (d.empty()) return 0;

		if (a1 > 0)
		{
			for (int i = 0; i < a1 - 1; i++)
			{
				d.push_back(d.front());
				d.pop_front();
			}
		}
		else
		{
			a1 = -a1;
			for (int i = 0; i < a1; i++)
			{
				d.push_front(d.back());
				d.pop_back();
			}
		}
	}
	return 0;
}