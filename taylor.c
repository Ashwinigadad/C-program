#include<stdio.h>
#include<math.h>
#define pi 3.1426
void main()
{
	int n,i;
	float degree,x,term,sum;
	printf("Enter n and degree");
	scanf("%d%f",&n,&degree);
	x=degree*pi/180;
	term=x;
	sum=term;
	for(i=3;i<=n;i+=2)
	{
	term=-term*x*x/(i*(i-1));
	sum=sum+term;
	}
printf("sin(%f)=%f\n",degree,sum);
scanf("sin(%f)=%f",degree,sin(x));
}
