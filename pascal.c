#include<stdio.h>
void main()
{
	int i,j,n,s,c=1;
	printf("Enter the number of rows:");
	scanf("%d",&n);
for(i=0;i<n;i++)
{
	for(s=1;s<=n-i;s++)
	
	printf("  ");
	for(j=0;j<=i;j++)
	{
		if(j==0||i==0)
		c=1;
		else
		c=c*(i-j+1)/j;
		printf("%4d",c);
	}
	printf("\n");
}
}
