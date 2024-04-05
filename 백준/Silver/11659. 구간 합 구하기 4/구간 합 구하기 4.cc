#include <iostream>
using namespace std;
int main() 
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
	int n, m;
    int a, b;
	cin >> n >> m;
    int c[100001] = { 0, };

    for (int i = 1; i <= n; i++)
    {
        cin >> c[i];
        c[i] += c[i - 1];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        cout << c[b] - c[a- 1] << '\n';
    }
	return 0;
}