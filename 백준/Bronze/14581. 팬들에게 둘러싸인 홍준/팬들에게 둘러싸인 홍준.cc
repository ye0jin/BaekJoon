#include <iostream>

using namespace std;
int main()
{
    string a;
    cin>>a;
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==1&&j==1)
            {
                cout<<":"<<a<<":";
            }
            else cout<<":fan:";
      
        }
        cout<<'\n';
    }
    
    return 0;
}