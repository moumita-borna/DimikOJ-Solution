#include<stdio.h>
void main()

{
        int t, i,j,n;
        scanf("%d",&t);
        while(t>0){
            scanf("%d",&n);

            for(i=1;i<=n;i++){
                for(j=1;j<=n;j++){
                    printf("*");

                }
                printf("\n");
            }
            t--;
            printf("\n");
        }


}
