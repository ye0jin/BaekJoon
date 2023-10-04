#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct st {
	string name;
	int day, month, year;
};
vector<st> v;

bool birthday(const struct st& x, const struct st& y)
{
	if (x.year < y.year) return true;
	else if (x.year == y.year)
	{
		if (x.month < y.month) return true;
		else if (x.month == y.month)
		{
			return x.day < y.day;
		}
	}

	return false;
}
int main() 
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string a;
		int b, c, d;
		cin >> a >> b >> c >> d; // 이름, 일, 월, 년도
		v.push_back({ a,b,c,d });
	} // end for

	sort(v.begin(), v.end(), birthday);
	cout << v.back().name << '\n' << v.front().name;
}