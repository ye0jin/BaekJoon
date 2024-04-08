#include <iostream>
using namespace std;
int main() {

	int n, m, a, b;
	int arr[101];
	cin >> n >> m;

	for (int i = 1; i <= n; i++) arr[i] = i;

	int temp;
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		for (int j = 0; j <= (b - a) / 2; ++j)
		{
			temp = arr[a + j];
			arr[a + j] = arr[b - j];
			arr[b - j] = temp;
		}
	}
	for (int i = 1; i <= n; i++) cout << arr[i] << ' ';

	return 0;
}