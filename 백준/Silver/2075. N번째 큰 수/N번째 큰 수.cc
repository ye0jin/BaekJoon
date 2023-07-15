#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false); 
cin.tie(NULL); 
cout.tie(NULL);
	int n = 0;
	cin >> n;

	int a[2500000] = {};

	for (int i = 0; i < n * n; i++)
	{
		cin >> a[i];
	}

	sort(a, a + (n * n)); // 정렬

	cout << a[(n * n) - n];
	return 0;
}