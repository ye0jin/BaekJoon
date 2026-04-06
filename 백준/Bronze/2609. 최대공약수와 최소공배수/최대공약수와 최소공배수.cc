#include <iostream>
#include <math.h>
using namespace std; 
int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}
int main() {
	int a, b;
	cin >> a >> b;
	int mn = min(a, b), mx = max(a, b); 

	for (int i = mn; i > 0;--i) {
		if (mn % i == 0 && mx % i == 0) {
			cout << i << endl;
			break;
		}
	} 
	cout<< a*b/gcd(a, b);

	return 0;
}