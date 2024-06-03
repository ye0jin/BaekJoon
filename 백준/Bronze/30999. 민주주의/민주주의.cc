#include <iostream>
using namespace std;
int main()
{
    int n, m, ans = 0;
    string a;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        int cnt = 0;
        for (int j = 0; j < a.length(); j++)
        {
            if (a[j] == 'O') cnt++;
        }
        if (cnt * 2 > m) 
        {
            ++ans;
        }
    }
    cout << ans;
}