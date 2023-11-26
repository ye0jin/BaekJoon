#include <iostream>
#include <map>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int a, b, c; // 일반 / 특별(20000원이상일경우만) / 서비스
    cin >> a >> b >> c;

    map<string, long long int> menuA; 
    map<string, long long int> menuB;
    set<string> menuC;       
    string name;
    long long int price;
    // 입력 받기
    for (int i = 0; i < a; i++) 
    {
        cin >> name >> price;
        menuA[name] = price;
    }

    for (int i = 0; i < b; i++) 
    {
        cin >> name >> price;
        menuB[name] = price;
    }

    for (int i = 0; i < c; i++) 
    {
        cin >> name;
        menuC.insert(name);
    }

    long long int n;
    cin >> n;

    long long int cnta = 0;
    long long int cntb = 0;
    long long int cntc = 0;

    for (long long int i = 0; i < n; i++)
    {
        string name;
        cin >> name;

        if (menuA.count(name)) {
            cnta += menuA[name];
        }
        else if (menuB.count(name)) {
            cntb += menuB[name];
        }
        else if (menuC.count(name)) {
            cntc++;
        }
    }

    if (cntc > 1) cout << "No";
    else if (cnta >= 20000)
    {
        if (cnta + cntb < 50000 && cntc == 1) cout << "No"; // 오만원이 넘지 않았는데 사려고 할 경우
        else cout << "Okay";
    }
    else if (cnta < 20000 && cntb == 0 && cntc == 0) cout << "Okay";
    else cout << "No";


    return 0;
}
