#include <iostream>
#include <stack>
using namespace std;
int main()
{
	int  n, cnt = 0;
	stack<char> s;
	string a;
	cin >> n >> a;

	int checkS = 0, checkL = 0;

	for (int i = 0; i < a.length(); i++) 
	{
		if (a[i] >= '1' && a[i] <= '9') cnt++;
		else if (a[i] == 'S') ++checkS;
		else if (a[i] == 'L') ++checkL;
		else if (a[i] == 'R')
		{
			if (checkL > 0)
			{
				checkL--; cnt++;
			}
			else break;
		}
		else if (a[i] == 'K')
		{
			if (checkS > 0)
			{
				checkS--; cnt++;
			}
			else break;
		}
	}
	cout << cnt;
}