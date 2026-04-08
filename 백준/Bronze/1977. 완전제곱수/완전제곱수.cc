#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int ans = 0;
	int min = -1;

	for (int i = 1; i * i <= b;++i) {
		int i2 = i * i; 
		if (i2 >= a) {
			ans += i2;
			if (min < 0) {
				min = i2;
			}
		}
	}

	if (ans <= 0) {
		cout << "-1";
	}
	else cout << ans << endl << min;
} 