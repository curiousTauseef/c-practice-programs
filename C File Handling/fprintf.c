#include<stdio.h>
#include<stdlib.h>

struct student
{
	char name[20];
	float marks;
}stu;

int main()
{

   FILE *fp;

   int i,n;

   fp=fopen("students.txt","w");

   printf("enter number of records .. \n");

   scanf("%d",&n);

   for(i=1;i<=n;i++)
   {
	printf("enter name and marks : ");
	scanf("%s%f",stu.name,&stu.marks);
	fprintf(fp,"%s %f \n",stu.name,stu.marks);
   }

   fclose(fp);
return 0;
}



