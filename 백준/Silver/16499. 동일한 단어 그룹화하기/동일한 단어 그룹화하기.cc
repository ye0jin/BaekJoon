#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
	int n,group=0;
	cin >> n;

	string check[101];

	for (int i = 0; i < n; i++)
	{
		int flag = 0;
		string a;
		cin >> a;
		sort(a.begin(), a.end());
		check[i] = a;

		for (int j = 0; j < i; j++)
		{
			if (check[i] == check[j])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			group++;
		}
	}
	cout << group;
	return 0;
}