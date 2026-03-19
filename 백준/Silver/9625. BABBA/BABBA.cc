#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n==1){
        cout<<"0 1";
        return 0;
    }
    else if(n==2){
        cout<<"0 1";
        return 0;
    }

    int a[50] = {0, 1};
    for(int i=2;i<46;++i){
        a[i] = a[i-1] + a[i-2];
    }

    cout<<a[n-1]<<" "<<a[n];
    return 0;
}