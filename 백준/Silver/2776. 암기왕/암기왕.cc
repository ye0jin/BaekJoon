#include <iostream>
#include <set>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	

	long long int n, m, k;
	long long int a, b;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		set<long long int> s;
		cin >> m;
		for (int i = 0; i < m; i++)
		{
			cin >> a;
			s.insert(a);
		}

		cin >> m;
		for (int i = 0; i < m; i++)
		{
			cin >> a;
			if (s.count(a) == 1) cout << 1 << "\n";
			else cout << 0 << "\n";
		}
	}

	return 0;
}