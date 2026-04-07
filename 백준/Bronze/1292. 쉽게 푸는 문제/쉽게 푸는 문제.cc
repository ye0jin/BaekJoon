#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int arr[1001] = {}, idx = 0, ans = 0;
	for (int i = 0;i < 1000;++i) {
		for (int j = 0;j < i;j++) {
			arr[idx++] = i;
			if (idx >= 1000) break;
		}
		if (idx >= 1000) break;
	}

	for (int i = a - 1;i < b;++i) {
		ans += arr[i];
	}
	cout << ans;
}