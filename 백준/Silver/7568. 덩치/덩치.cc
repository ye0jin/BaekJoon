#include <iostream>
#include<algorithm>


using namespace std;
 
int main()
{
    int n;
    cin>>n;
    
    pair<int, int> bigs[n];
    
    for(int i=0;i<n;++i){
        int a,b;
        cin>>a>>b;
        bigs[i].first = a;
        bigs[i].second = b;
    }
    
    for(int i=0;i<n;++i){
        int rank = 1;
        for(int j=0;j<n;++j){
            if(i==j) continue;
            if(bigs[i].first < bigs[j].first && bigs[i].second < bigs[j].second){
                rank++;
            }
        }
        
        cout<<rank<<" ";
    }
    return 0;
}