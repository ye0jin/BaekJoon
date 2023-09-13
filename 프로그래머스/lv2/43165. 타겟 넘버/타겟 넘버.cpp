#include <iostream>
#include <string>
#include <vector>
using namespace std;
int targetNum = 0;
int answer = 0;
void DFS(vector<int> v,int i, int sum) {
	if (i == v.size()) {
		if(sum == targetNum) answer++;
		return;
	}
	DFS(v,i + 1, sum + v[i]);
	DFS(v,i + 1, sum - v[i]);
}
int solution(vector<int> numbers, int target) {
	targetNum = target;
	DFS(numbers, 0, 0);
	return answer;
}