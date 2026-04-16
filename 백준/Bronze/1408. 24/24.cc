#include <iostream>
using namespace std;
int main() {
	int h1, m1, s1, h2, m2, s2;
	char c;
	cin >> h1 >> c >> m1 >> c >> s1;
	cin >> h2 >> c >> m2 >> c >> s2;

	int a = 60 * 60 * h1 + m1 * 60 + s1;
	int b = 60 * 60 * h2 + m2 * 60 + s2;

	int ans = b - a;
	if (ans < 0) {
		ans += 24 * 60 * 60;
	}

	int h = ans / (60 * 60);
	int m = (ans - (3600 * h)) / 60;
	int s = ans % 60;

	printf("%02d:%02d:%02d", h, m, s);

	return 0;
}