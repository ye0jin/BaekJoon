#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
	int n;
	cin >> n;

	string a;

	map<string, int> map;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		int k = a.find('.');
		a.erase(0, k + 1);

		map[a]++;
	}

	for (auto au : map)
	{
		cout << au.first<< " "<< au.second;
		cout << '\n';
	}
}