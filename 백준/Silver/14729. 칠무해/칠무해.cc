#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
	int n;
	double a;
	vector<double> vec;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		vec.push_back(a);
	}
	sort(vec.begin(), vec.end());
	for (int i = 0; i < 7; i++)
	{
		cout << fixed;
		cout.precision(3);
		cout << vec[i] << '\n';
	}
	return 0;
}