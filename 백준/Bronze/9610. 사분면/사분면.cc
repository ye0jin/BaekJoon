#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;

	int q1, q2, q3, q4, axis;
	q1 = q2 = q3 = q4 = axis = 0;

	for (int i = 0;i < n;++i) {
		int a, b;
		cin >> a >> b;
		if (a == 0 || b == 0) {
			axis++;
		} 
		else if (a > 0) {
			if (b > 0) q1++;
			else q4++;
		}
		else if (a < 0) {
			if (b > 0) q2++;
			else q3++;
		}
	}
	cout << "Q1: " << q1 << endl;
	cout << "Q2: " << q2 << endl;
	cout << "Q3: " << q3 << endl;
	cout << "Q4: " << q4 << endl;
	cout << "AXIS: " << axis << endl;
	return 0;
}