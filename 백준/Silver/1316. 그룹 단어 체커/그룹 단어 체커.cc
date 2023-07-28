#include <iostream>
#include <map>

using namespace std;

int main()
{
	int n,cnt=0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int flag = 0;
		char check;
		string a;
		map<char, int> m;

		cin >> a;
		check = a[0];
		for (int j = 0; j < a.length(); j++)
		{
			if (a[j] !=check && m[a[j]] > 0)
			{
				flag = 1;
				break;
			}
			check = a[j];
			m[a[j]]++;
		}
		if (flag == 0) cnt++;
	}

	cout << cnt;
}