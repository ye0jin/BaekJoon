#include<iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		string a;
		getline(cin, a);

		cout << i + 1 << ". " << a << '\n';
	}
	return 0;
}