#include <iostream>
using namespace std;
int main()
{
	string a;
	cin >> a;
	string check[10] = { "c=","c-","dz=","d-","lj","nj","s=","z=" };

	for (int i = 0; i < 8; i++)
	{
		while (true)
		{
			if (a.find(check[i]) != string::npos)
			{
				a.replace(a.find(check[i]), check[i].length(), "1");
			}
			else break;
		}
	}
	cout << a.length();

	return 0;
}