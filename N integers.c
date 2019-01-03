#include<stdio.h>
int main()
{
int a[10],i,c,b,sum=0;
printf("enter the limit of the natural numbers");
printf("\nenter the value for sum ");
scanf("%d%d",&c,&b);
for(i=1;i<=c;i++)
{
 scanf("%d",&a[i]);   
}
for(i=0;i<=b;i++)
{
sum=sum+i;
}
printf("%d",sum);
}
