#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (b / 2.f <= a) cout << "E";
    else cout << "H";
    return 0;
}