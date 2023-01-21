#include<stdio.h>
void main()
{
    int t,i,num;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&num);
        int r=num%10;
        int l=num/10000;
        int sum=r+l;
        printf("Sum = %d\n",sum);
    }
}
