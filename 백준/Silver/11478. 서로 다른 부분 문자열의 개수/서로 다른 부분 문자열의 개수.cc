#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false); 
cin.tie(NULL); 
cout.tie(NULL);
	string a;
	cin >> a;

	set<string> s;

	for (int i = 0; i < a.length(); i++)
	{
		string b;
		for (int j = i; j < a.length(); j++)
		{
			b += a[j];
			s.insert(b);
		}
	}
	cout << s.size();

	return 0;
}