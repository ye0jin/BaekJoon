#include <iostream>
#include <set>

using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	set<int> s;
	int a;

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		s.insert(a);
	}

	for (int i = 0; i < m; i++)
	{
		cin >> a;
		s.erase(a);
	}
	cout << s.size() << '\n';
	for (auto i : s)
	{
		cout << i << " ";
	}
	return 0;
}