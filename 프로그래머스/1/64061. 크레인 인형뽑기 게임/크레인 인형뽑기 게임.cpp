#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> st;
    vector<int> v;
    for(int i=0;i<moves.size();++i){ 
        int index = moves[i] - 1;
        for(int j=0; j<board.size(); j++){
            int b = board[j][index];
            if(b == 0){ // 0은 없는 거
                continue;
            } 
            if(!st.empty() && st.top() == b){
                answer += 2;
                st.pop();
            }
            else{
                st.push(b);
            } 
            board[j][index] = 0; // 뺏다고 알림
            break;
        }
        
    }
    return answer;
}