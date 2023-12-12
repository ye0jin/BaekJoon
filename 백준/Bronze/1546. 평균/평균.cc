
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n, a, max = -1;
	float total=0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		total += a;//토탈
		if (max < a)
		{
			max = a;//갱신
		}
	}

	cout << ((total / n) / max) * 100;
	return 0;
}