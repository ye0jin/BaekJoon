#include <iostream>
using namespace std;
long long int ff(int n) {
	if (n < 2) return 1;
	return n * ff(n - 1);
}

int main() {
	
	int n;
	cin >> n;
	cout << ff(n);
	return 0;
}