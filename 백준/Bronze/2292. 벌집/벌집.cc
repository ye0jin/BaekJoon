#include <iostream>
using namespace std;
int main() 
{
    int n; 
    cin >> n;

    int a, b;
    a = b = 1;
    while (true) 
    {
        if (n <= b) 
        {
            cout << a << "\n";
            return 0;
        }
        b += 6 * a;
        a++;
    }
    return 0;
}