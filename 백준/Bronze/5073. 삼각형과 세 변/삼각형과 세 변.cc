#include <iostream>
using namespace std;
int main()
{
	int a, b, c, m = 0;
	while (true)
	{
		cin >> a >> b >> c;
		if (a + b + c == 0) return 0;
		
		m = max(c, max(a, b));
		
		if (m < a + b && m < b + c && m < c + a)
		{
			if (a == b && b == c)
				cout << "Equilateral\n";
			else if (a == b || b == c || c == a)
				cout << "Isosceles\n";
			else cout << "Scalene\n";
		}
		else
		{
			cout << "Invalid\n";
			continue;
		}
	}
}