#include <iostream>

using namespace std;
int main() {
	int n, m=0;
	cin >> n;
	for (int i = 0; i < 9; i++) {
		int a;
		cin >> a;
		m += a;
	}
	cout << n - m;
	return 0;
}