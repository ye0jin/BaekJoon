#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    
    if(n==m){
        cout<<"*";
        return 0;
    }
    
    int a[m];
    for(int i=0;i<m;++i){
        cin>>a[i];
    }
    
    sort(a,a+m);
    
    int index = 0;
    for(int i=1;i<=n;++i){
        if(a[index] == i){
            index++;
            continue;
        }
        cout<<i<<" ";
    }
    return 0;
}