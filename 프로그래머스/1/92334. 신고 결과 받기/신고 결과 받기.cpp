//#include <iostream>
//
//using namespace std;
//int main() {
//	int n, m;
//	cin >> n >> m;
//
//	int ans = (n - 1) + (m - 1) * n;
//	cout << ans;
//	return 0;
//}

//#include <cmath>
//#include<iostream>
//using namespace std;
//
//long long int a[1000001];
//int main(void)
//{
//	long long int n, m;
//	cin >> n >> m;
//	for (long long int i = 2; i <= m; i++)
//		a[i] = i;
//
//	for (long long int i = 2; i <= sqrt(m); i++)
//	{
//		if (a[i] == 0)
//			continue;
//		for (long long int j = i * i; j <= m; j += i)
//			a[j] = 0;
//	}
//
//	for (long long int i = n; i <= m; i++)
//	{
//		if (a[i] == 0)
//			continue;
//		else
//			cout << a[i] << '\n';
//	}
//	return 0;
//}
#include <string>
#include <vector>
#include <unordered_map>
#include <set>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    unordered_map<string, set<string>> reportList; // 신고당한 사람, 신고한 사람 목록
    unordered_map<string, int> mail; // 메일 받는 함수
    for (int i = 0; i < report.size(); i++)
    {
        string s1 = report[i].substr(0, report[i].find(" ")); // 신고한 사람
        string s2 = report[i].substr(report[i].find(" ") + 1);
        reportList[s2].insert(s1);
    }

    for (auto i : reportList)
    {
        if (i.second.size() < k) continue;
        for (auto j : i.second) // 신고한 사람
        {
            mail[j]++;
        }
    }

    for (int i = 0; i < id_list.size(); i++)
    {
        answer.push_back(mail[id_list[i]]);
    }

    return answer;
}