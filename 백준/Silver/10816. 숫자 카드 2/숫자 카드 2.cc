#include <iostream>
#include <map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n;
	int b;
	map<int, int> s;
	for (int i = 0; i < n; i++)
	{

		cin >> b;
		s[b]++;
	}

	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> b;
		cout << s[b] << " ";
	}
	return 0;
}