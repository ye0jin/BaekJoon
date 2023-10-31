#include <iostream>

using namespace std;
int main() {
	int n, m;
	cin >> n >> m;

	int ans = (n - 1) + (m - 1) * n;
	cout << ans;
	return 0;
}