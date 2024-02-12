#include <iostream>

using namespace std;

int main() {

  int n, m,a,b,c;
  int ans[101] = {};

  cin >> n >> m;
  for(int i = 0; i < m; i++) 
  {
    cin >> a >> b >> c;
    for(int k = a; k <= b; k++) 
    {
      ans[k] = c;
    }
  }

  for(int i = 1; i <= n; i++) 
  {
    cout << ans[i] << ' ';
  }

  return 0;
}