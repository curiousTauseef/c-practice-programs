//Appending Records

#include<stdio.h>
#include<stdlib.h>
struct record
{
	char fname[30];
	char lname[30];
	float cgpa;

};

int main()
{
//appending content into file name AppendedRecords.txt
struct record stu;
int opt=1;
FILE *fp;
fp=fopen("Records.dat","wb+");

if(fp==NULL)
{
	printf("there was an error...\n");
	exit(1);
}
else
{
	while(opt==1)
	{
		printf("enter first name: \n");
		scanf("%s",stu.fname);
		printf("enter second name: \n");
		scanf("%s",stu.lname);
		printf("enter cgpa: \n");
		scanf("%f",&stu.cgpa);
		fwrite(&stu,sizeof(struct record),1,fp);
		printf("do you wish to enter more records \n");
		printf("PRESS 1 FOR YES, PRESS 0 FOR NO\n");
		scanf("%d",&opt);

	}


}
fclose(fp);
return 0;
}
