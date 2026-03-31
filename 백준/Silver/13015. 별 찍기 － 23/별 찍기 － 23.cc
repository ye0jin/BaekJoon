#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	
	for (int i = 0;i < n * 2 - 1;++i) {
		// 처음&끝&중간은 따로 빼줘야할 것 같다
		if (i == 0 || i == n * 2 - 2) {
			for (int k = 0;k < n;++k) {
				cout << "*";
			}
			for (int k = 0; k < n * 2-3;++k) {
				cout << " ";
			}
			for (int k = 0;k < n;++k) {
				cout << "*";
			}

			cout << endl;
			continue;
		}
		
		if (i == n - 1) {
			for (int j = 0;j < n - 1;j++) {
				cout << " ";
			}
			cout << "*";
			for (int j = 0;j < n - 2;j++) {
				cout << " ";
			}
			cout << "*"; 
			for (int j = 0;j < n - 2;j++) {
				cout << " ";
			}
			cout << "*";
			
			cout << endl;
			continue;
		}

		int minus = (n - 1 - i);
		if (minus < 0) minus = -minus;

		for (int j = 0;j < (n - 1) - minus;j++)
		{
			cout << " ";
		}

		cout << "*";
		for (int j = 0;j < n - 2;j++) cout << " "; // 중간 공백
		cout << "*";

		for (int j = 0;j < minus * 2 - 1; j++) {
			cout << " ";
		}

		cout << "*";
		for (int j = 0;j < n - 2;j++) cout << " "; // 중간 공백
		cout << "*";
		
		cout << endl;
	}
	return 0;
}