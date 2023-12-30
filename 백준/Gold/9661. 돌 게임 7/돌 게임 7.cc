
#include <iostream>
using namespace std;
int main()
{
	long long int n;
	cin >> n;
	// 1, 4, 16, ...
	// S C S S C 
	// 1 SK 1
	// 2 CY 1 1
	// 3 SK 1 1 1
	// 4 SK 4
	// 5 CY 4 1
	// 6 SK 4 1 1
	// 7 CY 4 1 1 1
	// 8 SK (4 4) 1 1 4 1 1??
	// 9 SK 4 4 1
	// 10 CY 4 4 1 1
	// 11 SK 4 4 1 1 1
	if (n % 5 == 2 || n % 5 == 0) cout << "CY";
	else cout << "SK";
	
	return 0;
}