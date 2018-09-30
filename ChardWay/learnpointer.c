#include<stdio.h>
int main()
{
int num[]={19,19,19,19,19,19};
char *name[]={"Mayank","Anupam","Arush","Bhupit","Neelesh","Jayant"};
int i,j,k,sizenum,sizename;

int *ageptr;
char **nameptr;

ageptr=num;
nameptr=name;

sizenum=sizeof(num)/sizeof(int);
printf("sizeof age array %d\n",sizenum);

//first method of using pointers
for(i=0;i<sizenum;i++)
{
printf("%s is %d age years old.\n",*(nameptr+i),*(ageptr+i));
}

//char *test="Mayank Singh";
//printf("%s\n",test);
//printf("%s\n",name[0]);

return 0;
}
