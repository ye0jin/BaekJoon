
#include<iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string n;
		cin >> n;
		if (n.length() >= 6 && n.length() <= 9) cout << "yes";
		else cout << "no";
		cout << endl;
	}
	return 0;
}