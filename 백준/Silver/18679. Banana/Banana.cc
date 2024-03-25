#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
	int n, m;
	cin >> n;
	string a, b, c;

	map<string, string> map;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b >> c;
		map[a] = c;
	}

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		
		for (int j = 0; j < m; j++)
		{
			cin >> a;
			if (map.find(a) != map.end())
			{
				cout << map[a] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}