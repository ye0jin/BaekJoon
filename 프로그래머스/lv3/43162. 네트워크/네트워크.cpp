
#include <string>
#include <vector>
#include <iostream>
using namespace std;
int answer = 0, n1;
int check[1001] = {};

void DFS(int v, vector<vector<int>>& c)
{
    if (check[v] == 1) return;
    check[v] = 1;
    for (int i = 0; i < c[v].size(); i++)
    {
        if (c[v][i] == 1) DFS(i, c);
    }
}
int solution(int n, vector<vector<int>> computers) 
{
    for (int i = 0; i < n; i++)
    {
        if (check[i] == 0)
        {
            DFS(i, computers);
            answer++;
        }
    }
    return answer;
}