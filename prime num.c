#include<stdio.h>
int main()
{
int i, prime,upper,lower,n;
printf("\nEnter the limit:");
scanf("\n %d \n %d", &lower,&upper);
printf("\nthe num are:");
for(n=lower;n<=upper;n++)
{
prime=1;
for(i=2;i<n/2;i++)
if(n%i==0)
{
prime=0;
break;
}
if(prime)
printf("\t%d", n);
}
return 0;
}
