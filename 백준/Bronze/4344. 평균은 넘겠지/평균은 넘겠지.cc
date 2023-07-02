#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
	int n, all=0;
	float plus=0.0f;
	int arr[10000] = {};
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		for (int j = 0; j < a; j++)
		{
			cin >> arr[j];
			plus += arr[j];
		}
		plus /= (float)a;

		for (int j = 0; j < a; j++)
		{
			if (arr[j] <= plus) continue;

			all++;
		}
		printf("%.3f", (float)all/a*100);
		cout << "%" << endl;
		plus = 0;
		all = 0;
	}

	return 0;
}