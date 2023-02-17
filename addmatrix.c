#include<stdio.h>
void main()
{
	int i,j,m,n,p,q,a[10][10],b[10][10],c[10][10];
	printf("Enter the size of A:");
	scanf("%d%d",&m,&n);

	printf("Enter the size of B:");
	scanf("%d%d",&p,&q);
	printf("Enter the elements of A:");
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);

	printf("Enter the elements of B:");
	for(i=0;i<p;i++)
	for(j=0;j<q;j++)
	scanf("%d",&b[i][j]);

	printf("The matrix A is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%d\t",a[i][j]);
		printf("\n");
	}
	
	printf("The matrix B is:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		printf("%d\t",b[i][j]);
		printf("\n");
	}
	
	printf("The sum of A and B is:\n");
	for(i=0;i<m;i++)
	for(j=0;j<q;j++)
	c[i][j]=a[i][j]+b[i][j];

	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		printf("%d\t",c[i][j]);
		printf("\n");
	}
}
