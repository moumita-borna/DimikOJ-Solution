#include<stdio.h>
#include<math.h>
void main()
{
    int t,a,b,c;
    double area,s;
    scanf("%d",&t);
    while(t>0)
    {
      scanf("%d%d%d",&a,&b,&c);
      s=(a+b+c)/2;
      area=sqrt(s*(s-a)*(s-b)*(s-c));
      printf("Area = %0.3lf\n",area);
      t--;
    }
}
