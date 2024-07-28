#include <iostream>
using namespace std;
 
int a(int n) {
    return n * (n + 1) / 2;
}
 
int main() 
{
    int t, n, ans;
    cin >> t;
    for (int i = 0; i < t; ++i) 
    {
        ans = 0;
        cin >> n;
        for (int j = 1; j <= n; ++j) 
            ans += a(j + 1) * j;
        cout << ans << '\n';
    }
    return 0;
}