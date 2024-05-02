#include <iostream>
using namespace std;
int main() {
	int n, cnt = 0;
	cin >> n;

	int i = 1;
	while (true)
	{
		if (n <= 0) break;
		
		if (n < i) 
		{
			i = 1;
		}
		n -= i++;
		cnt++;
	}
	cout << cnt;
	return 0;
}