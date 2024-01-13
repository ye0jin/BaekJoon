#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
	cout << fixed; cout.precision(4);

	map<string,int> map;
	string a;
	int hap = 0;
	while(getline(cin, a)) {
		map[a]++;
		hap++;
	}

	for (auto i : map)
	{
		cout << i.first << " " << 
			(i.second * 100) / (float)hap << '\n';
	}
	return 0;
}