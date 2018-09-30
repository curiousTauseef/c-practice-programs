#include<stdio.h>
#include<stdlib.h>

int main()
{
FILE *fp1;

int ch;

if((fp1=fopen("raghav1.txt","w"))==NULL)
{

	printf("bye");
	exit(1);

}
else
{
	printf("enter text");


while((ch=getchar())!=EOF)
{
fputc(ch,fp1);
}

}

fclose(fp1);
return 0;
}
