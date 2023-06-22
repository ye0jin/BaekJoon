#include <iostream>
#include <algorithm>

using namespace std;

bool check(string i, string j)
{
	if (i.length() == j.length())
	{
		return i < j;
	}
	else
	{
		return i.length() < j.length();
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	string a[20001];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n, check);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == a[i + 1]) continue;
		cout << a[i] << '\n';
	}
}