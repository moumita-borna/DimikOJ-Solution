#include<stdio.h>
#include<string.h>
void main()
{
    int t,i,length,j;
    char str[1000];
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%s",str);
        length=strlen(str);
        //printf("Length = %d", length);

        for(j=length-1;j>=0;j--)
        {
            printf("%c",str[j]);
        }
        printf("\n");
        t--;


    }

}
