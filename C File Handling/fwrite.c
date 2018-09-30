#include<stdio.h>
#include<stdlib.h>

struct record
{
	char name[30];
	int rollno;
	float cg;
}student;

int main()
{
int i,n;

FILE *fptr;
fptr=fopen("myfile.dat","wb");

if(fptr==NULL)
{
	printf("there was an error in writing content to the file");
}
else
{
	printf("enter the number of records u want\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter record %d\n",i+1);
		printf("enter name\n");
		scanf("%s",student.name);
		fflush(stdin);
		printf("enter roll no\n");
		scanf("%d",&student.rollno);
		printf("enter cgpa\n");
		scanf("%f",&student.cg);
		fwrite(&student,sizeof(student),1,fptr); 
	}
}

return 0;
}
