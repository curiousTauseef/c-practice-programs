//Appending Records

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
FILE *fp;
fp=fopen("Records.dat","rb+");
int flag;
float sum=0;
char firstn[30];
long size = sizeof(stu);

if(fp==NULL)
{
	printf("there was an error...\n");
	exit(1);
}
	
printf("enter first name of student whose record you wish to modify \n");
scanf("%s",firstn);

while(fread(&stu,sizeof(struct record),1,fp)==1)
	{
		if(strcmp(firstn,stu.fname)==0)
		{
			printf("entering data again \n");
			printf("enter first name: \n");
                	scanf("%s",stu.fname);
                	printf("enter second name: \n");
                	scanf("%s",stu.lname);
                	printf("enter cgpa: \n");
                	scanf("%f",&stu.cgpa);
                	fseek(fp,-(sizeof(struct record)),1);
			fwrite(&stu,sizeof(struct record),1,fp);
			flag=1;
			break;
		}
	}

	if(flag==0)
		printf("name is not present\n");
	else
		printf("record modified\n");


fclose(fp);
return 0;
}
