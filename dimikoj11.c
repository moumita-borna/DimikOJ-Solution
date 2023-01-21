#include<stdio.h>
void main()
{
    int t,n,i;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d",&n);
        long long f=1;
        for(i=1;i<=n;i++)
        {
            f=f*i;
        }
        t--;
        printf("%lld\n",f);
    }

}
