#include <iostream>
 
using namespace std;
 
char a[101][101];
int n;
 
void check(int i,int j, char l)
{
    if(i<0||j<0||i>n||j>n||a[i][j]!=l) return;
 
    a[i][j]='0';
    check(i+1,j,l);
    check(i-1,j,l);
    check(i,j+1,l);
    check(i,j-1,l);
 
}
void check(int i,int j, char l,char k,int arr[101][101])
{
    if(i<0||j<0||i>n||j>n||(arr[i][j]!=l&&arr[i][j]!=k)) return;
 
    arr[i][j]='0';
 
    check(i+1,j,l,k,arr);
    check(i-1,j,l,k,arr);
    check(i,j+1,l,k,arr);
    check(i,j-1,l,k,arr);
 
 
}
int main()
{
    int arr[101][101]={0};
    cin>>n;
 
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            arr[i][j]=a[i][j];
        }
 
    int b=0,c=0;
 
    // 일반
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]=='0')
                continue;
 
            if(a[i][j]=='R')
            {
                check(i,j,'R');
            }
            else if(a[i][j]=='B')
            {
                check(i,j,'B');
            }
            else if(a[i][j]=='G')
            {
                check(i,j,'G');
            }
            b++;
        }
    }
 
    // 적록색맹
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]=='0')
                continue;
 
            if(arr[i][j]=='R' || arr[i][j]=='G')
            {
                check(i,j,'R','G',arr);
            }
            else if(arr[i][j]=='B')
            {
                check(i,j,'B','B',arr);
            }
            c++;
        }
    }
 
    cout<<b << " "<<c;
    return 0;
}