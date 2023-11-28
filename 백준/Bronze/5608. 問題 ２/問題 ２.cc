#include <iostream>
#include <map>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
	string c, b;
	int n;
	cin >> n;
	map<string, string> m;
	for (int i = 0; i < n; i++)
	{
		cin >> b >> c;
		m[b] = c;
	}
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> b;
		auto iter = m.find(b);
		if (iter != m.end())
		{
			cout << iter->second;
		}
		else
		{
			cout << b;
		}
	}
	return 0;
}