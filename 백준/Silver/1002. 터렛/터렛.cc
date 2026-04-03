#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1;
        cin >> x2 >> y2 >> r2;

        int x = (x2 - x1) * (x2 - x1);
        int y = (y2 - y1) * (y2 - y1);
        int d = x + y;

        int sum = (r1 + r2) * (r1 + r2);
        int diff = (r1 - r2) * (r1 - r2);

        if (x == 0 && y == 0) {
            if (r1 == r2) cout << "-1\n";
            else cout << "0\n";
        }
        else {
            if (d > sum || d < diff) cout << "0\n";
            else if (d == sum || d == diff) cout << "1\n";
            else cout << "2\n";
        }
    }
    return 0;
}