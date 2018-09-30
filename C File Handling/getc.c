#include<stdio.h>
#include<stdlib.h>

int main()
{
FILE *fp1;

int ch;

if((fp1=fopen("raghav1.txt","r"))==NULL)
{

	printf("bye\n");
	exit(1);

}
else
{

ch=fgetc(fp1);
while(ch!=EOF)
{

printf("%c",ch);
ch=fgetc(fp1);

}

}

fclose(fp1);
return 0;
}
