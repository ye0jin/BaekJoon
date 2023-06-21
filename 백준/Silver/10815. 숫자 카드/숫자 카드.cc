#include<iostream>
#include <unordered_map>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
	unordered_map<int, int> a;
	int n, m;
	cin >> n;
	int b;
	
	for (int i = 0; i < n; i++)
	{
		cin >> b;
		a[b]++;
	}
	cin >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> b;
		if (a[b] == 1)
		{
			cout << "1 ";
		}
		else
		{
			cout << "0 ";
		}
	}

	return 0;
}