#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int m = n * 5;
	int center = m / 2; 
	for (int i = 0;i < m;++i) { 
		int center = i / n; // 1~5
		for (int j = 0;j < n;j++) {
			cout << "@";
		} // 고정값
		int check = (abs(center - 2) + 1) * n;
		for (int j = 0;j < check;++j) {
			if (check == n) cout << "@";
			else			cout << " ";
		}
		for (int j = 0;j < n;j++) {
			cout << "@";
		} // 고정값

		cout << endl;
	}
	return 0;
}