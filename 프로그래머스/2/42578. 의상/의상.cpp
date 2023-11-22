
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) 
{
    int answer = 1;
    map<string, int> m; // map<종류, 개수> map

    for (auto i : clothes)
    {
        m[i[1]]++; // 벡터에 첫번째 (=종류) 에 +1 (개수++)
    }

    for (auto i : m)
    {
        int value = i.second + 1;
        // ** 중요 **
        answer *= value;// 해당 종류의 의상을 입지 않은 경우도 고려하여 +1 해준 것
    }

    return answer - 1; // 아무것도 입지 않은 것 제외시켜주고 (-1) 리턴
}