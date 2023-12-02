#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main() 
{
	map<int, int> map;
	int n, a, b;
	int c[101] = {};
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b; // 효능, 이름
		map[a] = b;
	}
	
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		bool bo = true;
		for (int j = 0; j < a; j++)
		{
			cin >> b;
			if (map.find(b) != map.end()) // 있음
			{
				c[j] = map[b];
			}
			else bo = false; // 사망
		}
		if (bo) // 안 죽었으면
		{
			for (int j = 0; j < a; j++)
			{
				cout << c[j] << " ";
			} 
			cout << '\n';
		}
		else cout << "YOU DIED\n";
	}
	return 0;
}