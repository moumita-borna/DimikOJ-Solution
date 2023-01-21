#include<stdio.h>
#include<string.h>
void main()
{
    int t,length,i;
    char str1[1000],str2[1000];
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%s",str1);
        length=strlen(str1);
        int j=0;
        for(i=length-1;i>=0;i--)
        {
            str2[i]=str1[j];
            j++;

        }
        str2[length] =  '\0';

        if(strcmp(str1,str2)==0)
        {
            printf("Yes! It is palindrome!\n");
        }
        else
        {
            printf("Sorry! It is not palindrome!\n");
        }
        t--;
    }
}
