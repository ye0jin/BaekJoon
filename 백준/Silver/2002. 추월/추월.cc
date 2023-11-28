#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main()
{
	vector<int> v;
	int n, ans =0;
	cin >> n;
	string a;
	map<string, int> m;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		m[a] = i;
	}
	for (int i = 0; i < n; i++) // 추월
	{
		cin >> a;
		v.push_back(m[a]);
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (v[i] > v[j])
			{
				ans++;
				break;
			}
		}
	}
    cout<<ans;
	return 0;
}