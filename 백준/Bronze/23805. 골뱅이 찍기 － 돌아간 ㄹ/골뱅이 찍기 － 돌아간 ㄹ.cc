#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int m = n * 5;
	for (int i = 0;i < m;++i) {
		for (int j = 0;j < m;++j) {
			if (i< n) {
				if (j >= n * 3 && j < n * 4) {
					cout << " ";
				}
				else { 
					cout << "@";
				}
				continue;
			}
			if (i > m - 1 - n) {
				if (j >= n && j< n * 2) {
					cout << " ";
				}
				else {
					cout << "@";
				}
				continue;
			}

			if ((j >= n * 3 && j < n * 4)||(j >= n && j < n * 2)) {
				cout << " ";
			}
			else {
				cout << "@";
			}
		}

		cout << endl;
	}
}