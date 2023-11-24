
#include <iostream>
#include <map>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	int a, v1, v2;

	map<int, int> m;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a == 1)
		{
			cin >> v1 >> v2;
			m[v2] = v1;
		}
		else
		{
			cin >> v1;
			cout << m[v1] << '\n';
		}
	}
	return 0;
}