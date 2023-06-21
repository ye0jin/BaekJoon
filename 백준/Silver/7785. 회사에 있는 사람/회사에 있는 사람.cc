#include <iostream>
#include <set>
#include <unordered_set>

using namespace std;

int main() {
	
	int n;
	cin >> n;

	string a, b;

	set<string> s;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		if (b == "enter")
		{
			s.insert(a);
		}
		else if (b == "leave")
		{
			s.erase(a);
		}
	}

	for (auto i=s.rbegin(); i!=s.rend();i++)
	{
		cout << *i << '\n';
	}
}