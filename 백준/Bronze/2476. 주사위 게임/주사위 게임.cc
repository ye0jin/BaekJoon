#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int ans = -1, temp =0;
	int a, b, c;
	for (int i = 0;i < n;++i) {
		cin >> a >> b >> c;
		if (a == b && b == c && c==a) {
			temp = 10000 + a * 1000;
		}
		else if (a == b || c == a) {
			temp = 1000 + a * 100;
		}
		else if (c == b) {
			temp = 1000 + b * 100;
		}
		else {
			temp = max(max(a, b), c) * 100;
		}

		if (ans < temp) ans = temp;
	}

	cout << ans;
	return 0;
}