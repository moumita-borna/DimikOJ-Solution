#include<stdio.h>
#include<math.h>

void main()
{
    int t;
    scanf("%d",&t);
    while(t>0)

    {   long int n,m;
        scanf("%ld",&n);
        m=sqrt(n);
        if(n==m*m)
        {
            printf("YES\n");
        }
        else{printf("NO\n");}
        t--;
    }
}
