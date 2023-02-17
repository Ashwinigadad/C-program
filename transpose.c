#include<stdio.h>
void main()
{
	int i,j,m,n,a[10][10],c[10][10];
	printf("Enter the size of A:");
	scanf("%d%d",&m,&n);

	printf("Enter the elements:");
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);

	printf("The matrix A is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%d\t",a[i][j]);
		printf("\n");
	}

	printf("the transpose of A is:\n");
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	c[i][j]=a[j][i];

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%d\t",c[i][j]);
		printf("\n");
	}
}


