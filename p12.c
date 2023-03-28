#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr1,*fptr2;
	char filename[100],c,d;
	printf("Enter the filename to openfor reading:\n");
	scanf("%s",filename);
fptr1=fopen(filename,"r");
if(fptr1==NULL)
{
	printf("cannot open file %s\n",filename);

}
printf("Enter the filename to open for writing\n");
scanf("%s",filename);

fptr2=fopen(filename,"w");
if(fptr2==NULL)
{
	printf("cannot open file %s\n",filename);

}
c=fgetc(fptr1);
while(c!=EOF)
{
	fputc(c,fptr2);
	c=fgetc(fptr1);
}
printf("\n contents copied to %s",filename);
fclose(fptr1);
fclose(fptr2);
fptr1=fopen(filename,"r");
fptr1=fopen(filename,"r");
c=fgetc(fptr1);
while(c!=EOF)
{
	printf("%c",c);
	c=fgetc(fptr1);
}
d=fgetc(fptr2);
while(d!=EOF)
{
printf("%c",d);
d=fgetc(fptr2);
}
fclose(fptr1);
fclose(fptr2);
return 0;
}
