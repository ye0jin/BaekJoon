#include <iostream>
#include <string>

using namespace std;
int main()
{
	string a;
	cin >> a;
	for (int i = 0; i < a.length(); ++i) 
	{
		if (a[i] == 'C' || a[i] == 'A' || a[i] == 'M' || a[i] == 'B' || a[i] == 'R' ||
			a[i] == 'I' || a[i] == 'D' || a[i] == 'G' || a[i] == 'E') continue;
		cout << a[i];
	}
	return 0;
}
