#include <iostream>
using namespace std;
int main() {

	bool ascen = true;
	bool dscen = true;
	int a = 8;
	for (int i = 1; i <= 8; i++)
	{
		int v;
		cin >> v;
		if (v == i)//ascen
		{
			dscen = false;
		}
		else if (v == a)//dscen
		{
			ascen = false;
		}
		else // 아무것도아님
		{
			cout << "mixed";
			return 0;
		}
		a--;
	}
	if (dscen) cout << "descending";
	else if (ascen)cout << "ascending";
	else cout << "mixed";
	return 0;
}