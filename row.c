#include<stdio.h>
void main()
{
int i,j,n,p;
printf("Enter the number of rows:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=i;j<n;j++)
printf(" ");
for(p=1;p<=i;p++)
printf("$ ");
printf("\n");
}	
}
