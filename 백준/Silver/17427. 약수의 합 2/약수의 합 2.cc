#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    long long int cnt = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) 
    {
        cnt += (n / i) * i;
    }
    cout << cnt;

    return 0;
}