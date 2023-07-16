#include <stdio.h>

int n,ans,col[16],inc[40],dec[40];

void solve(int r)
{
    if(r>n)
    {
        ans++;
        return;
    }

    for(int i=1;i<=n;i++)
    {
        if(!col[i]&&!inc[r+i]&&!dec[n+(r-i)+1])
        {
            col[i]++; // 세로 check
            inc[r+i]++; // 증가 대각선 check
            dec[n+(r-i)+1]++; // 감소 대각선 check
            solve(r+1);

            // check 해둔 거 해지
            col[i]--;
            inc[r+i]--;
            dec[n+(r-i)+1]--;
        }
    }
}

int main()
{
    scanf("%d",&n);
    solve(1);
    printf("%d",ans);

    return 0;
}