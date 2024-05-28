#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int p, k, h, t;
    p = k = h = t = 0;

    vector<string> v;
    for (int i = 0; i < s.length(); i += 3)
    {
        string str = s.substr(i, 3); 

        for (int j = 0; j < v.size(); j++) 
        {
            if (str == v[j])
            {
                cout << "GRESKA"; return 0;
            }
        }
        
        switch (str[0])
        {
        case 'P':
            p++; break;
        case 'K':
            k++; break;
        case 'H':
            h++; break;
        case 'T':
            t++; break;
        }
        v.push_back(str);
    }
    
    cout << 13 - p << " " << 13 - k << " " << 13 - h << " " << 13 - t;
    return 0;
}
