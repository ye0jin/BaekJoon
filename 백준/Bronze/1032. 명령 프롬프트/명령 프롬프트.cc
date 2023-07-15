#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	string input, ans = "";
	cin >> input; // 처음을 기준
	ans = input;

	for (int i = 0; i < n - 1; i++)
	{
		string a;
		cin >> a;
		
		for (int j = 0; j < input.length(); j++)
		{
			if (input[j] != a[j])
			{
				ans[j] = '?';
			}
		}
	}

	cout << ans;
}