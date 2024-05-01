#include <iostream>
#include <string>
using namespace std;
int main() {
    string k;
    int cnt = 10;
    cin >> k;
    for (int i = 0; i < k.length() - 1; i++)
    {
        if ((k[i] != k[i + 1]))
        {
            cnt += 10;
        }
        else
        {
            cnt += 5;
        }
    }
    cout << cnt << '\n';
}