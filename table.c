#include<stdio.h>
void main()
{
int i,n,m;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
m=n*i;

printf("%d X %d = %d\n",n,i,m);
}
}
