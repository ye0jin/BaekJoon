#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string a;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        for (int j = 0; j < a.length(); j++)
        {
            if (a[j] == 'S')
            {
                cout << a;
                return 0;
            }
        }
    }
    
    return 0;
}