#include<stdio.h>
void main()
{
    int t,n,x,temp,sum;
    scanf("%d",&t);
    while(t>0)
    {
       scanf("%d",&n);
       x=n;
       sum=0;
       while(x>0)
       {
           temp=x%10;
           x=x/10;
           sum=sum+temp*temp*temp;

        }
        if(n==sum){
               printf("%d is an armstrong number!\n",n);
        }
        else{
               printf("%d is not an armstrong number!\n",n);
        }
        t--;


    }
}






