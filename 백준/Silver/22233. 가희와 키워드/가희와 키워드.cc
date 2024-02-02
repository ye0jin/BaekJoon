#include <iostream>
#include <map>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
	string s;
	int n, m;
	cin >> n >> m;
	map<string, int> map;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		map[s]++;
	}
	string a = "";
	for (int i = 0; i < m; i++)
	{
		cin >> s;
		for (int j = 0; j < s.length(); j++)
		{
			if (s[j] == ',')
			{
				//cout << a << endl;
				map.erase(a);
				a = "";
			}
			else
			{
				a += s[j];
			}
		}
		map.erase(a);
		a = "";
		cout << map.size() << '\n';
	}
	return 0;
}