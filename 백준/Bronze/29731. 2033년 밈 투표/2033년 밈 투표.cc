#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    int cnt = 0;
    cin >> n;
    cin.ignore();

    string s;

    string check[] = { "Never gonna give you up", "Never gonna let you down",
                       "Never gonna run around and desert you", "Never gonna make you cry",
                       "Never gonna say goodbye", "Never gonna tell a lie and hurt you",
                       "Never gonna stop" };

    for (int i = 0; i < n; i++) {
        getline(cin, s);
        for (int j = 0; j < 7; j++) {
            if (s == check[j]) {
                cnt++;
                break;
            }
        }
    }
    if (cnt != n)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
