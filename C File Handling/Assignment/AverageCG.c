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
FILE *fp;
fp=fopen("Records.dat","rb+");
float sum=0;
int count=0;

if(fp==NULL)
{
	printf("there was an error...\n");
	exit(1);
}
else
{
	while(fread(&stu,sizeof(struct record),1,fp)==1)
	{

		printf("fname : %s\n",stu.fname);
		printf("lname : %s\n",stu.lname);
		printf("cgpa : %f\n",stu.cgpa);
		sum=sum+stu.cgpa;
		count++;
		
	}

	printf("average cg : %f \n",sum/count);

}
fclose(fp);
return 0;
}
