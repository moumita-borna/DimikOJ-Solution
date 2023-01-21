#include<stdio.h>
#include<string.h>
void main()
{
 int t,i;
 scanf("%d",&t);
 for(i=1;i<=t;i++)
 {
     char s[100];
     scanf("%s",&s);
     int len=strlen(s);

     if(s[len-1]%2==0)
     {
         printf("even\n");

     }
     else
        {
            printf("odd\n");

     }

 }
}
