
#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	long long int n;
	cin >> n;

	if (n%2 == 1) cout << "SK";
	else cout << "CY";
	return 0;
}