#include<stdio.h>

int main()

{
    int j=0;
    for(int i=1000; i>0; i--){
        printf("%d\t", i);
        j++;
        if(j % 5 == 0){
            printf("\n");
        }
    }
}

