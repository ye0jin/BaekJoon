
#include <iostream>

int main()
{
    int n,m;
    std::cin>>n>>m;
    
    int a[n];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    
    int ans = 0;
    
    for(int i=0;i<n-2;++i){
        for(int j=i+1;j<n-1;++j){
            for(int k=j+1;k<n;++k){
                int check = a[i]+a[j]+a[k];
                if(check <= m){
                    if(check > ans){
                        ans = check;
                    }
                }
            }
        }
    }
    
    std::cout<<ans;
    
    return 0;
}