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
fptr=fopen("myfile.dat","rb");

if(fptr==NULL)
{
	printf("there was an error in writing content to the file");
	exit(1);
}
else
{
	while(fread(&student,sizeof(student),1,fptr)==1)
	{
		printf("NAME : %s\n",student.name);
		printf("ROLLNO : %d\n",student.rollno);
		printf("CG : %f\n",student.cg);
	}
}

return 0;
}
