#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;

	int hills[n];
	int ans = 2147483647;

	for (int i = 0;i < n;++i) {
		cin >> hills[i];
	}

	for (int i = 0;i < 100 - 17;++i) { // 총 100개
		int h = i + 17; // 최대높이, i = 최소 높이
		int temp = 0;

		for (int j = 0;j < n;++j) {
			if (hills[j] < i) { // 최소 높이보다 작을 경우
				temp = temp + (i - hills[j]) * (i - hills[j]);  
			}
			if (hills[j] > h) {
				temp = temp + (hills[j] - h) * (hills[j] - h);
			}
		}

		if (ans > temp) {
			ans = temp;
		}
	}
	cout << ans;
	return 0 ;
}