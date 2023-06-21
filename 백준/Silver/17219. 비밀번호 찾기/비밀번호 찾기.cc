#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	
	string a,b;
	map<string, string> map;

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		cin >> b;

		map[a] = b;
	}

	for (int i = 0; i < m; i++)
	{
		cin >> a;
		cout << map[a] << '\n';
	}

	return 0;
}