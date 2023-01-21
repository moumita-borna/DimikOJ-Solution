#include<stdio.h>
void main()
{   int t,i,n,m,l,smallest,biggest,mid;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {

            scanf("%d %d %d",&n,&m,&l);
            if(n<=m && n<=l)//smallestr number finding
            {
                smallest=n;
            }
            else if(m<=n && m<=l)
            {
                smallest=m;
            }
            else{
                smallest=l;
            }

               if(n>=m && n>=l)//biggest number finding
            {
                biggest=n;
            }
            else if(m>=n && m>=l)
            {
                biggest=m;
            }
            else{
                biggest=l;
            }

            mid=n+m+l-biggest-smallest;//middle number finding

        printf("Case %d: %d %d %d\n",i,smallest,mid,biggest);
    }

}
