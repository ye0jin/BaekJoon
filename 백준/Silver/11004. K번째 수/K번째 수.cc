#include <iostream>	
#include <algorithm>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false); 
cin.tie(NULL); 
cout.tie(NULL);
	int n, m, a[5000001];
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	sort(a, a + n);
	cout << a[m - 1];
	return 0;
}