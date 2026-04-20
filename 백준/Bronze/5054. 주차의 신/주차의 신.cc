#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 0;i < n; ++i) {
		int a;
		cin >> a;
		int arr[100];
		for (int j = 0;j < a;j++) {
			cin >> arr[j];
		}
		sort(arr, arr + a);
		int last = arr[0], ans = 0;
		for (int j = 1;j < a;j++) { 
			ans += arr[j] - last;
			last = arr[j];
		}
		cout << ans * 2 << endl;
	}
	return 0;
}