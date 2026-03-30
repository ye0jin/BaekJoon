#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for(int i=0;i<n;++i) {
		if (i == n - 1) {
			for (int j = 0;j < n * 2 - 1;j++) {
				cout << "*";
			}
			continue;
		} 
		for(int j=0;j<n-i-1;++j) {
			cout << " ";
		}
		for(int j=0;j<=i;++j) {
			if (j == 0 || j == i)
				cout << "*";
			else cout << " ";
			if(j != i) cout << " ";
		}
		cout << "\n";
	}
}