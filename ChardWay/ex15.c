#include<stdio.h>
int main(int argc,char *argv[])
{
int ages[]={23,43,12,89};
char *names[]={"Junior","Neil","Nitin","Mukesh"};

int count=sizeof(ages)/sizeof(int);
int i=0;

for(i=0;i<count;i++)
{
printf("%s has %d years alive. \n",names[i],ages[i]);
}

printf("___________________\n");

int *cur_age=ages;
char **cur_name=names;

for(i=0;i<count;i++)
{
printf("%s is %d years old. \n",*(cur_name+i),*(cur_age+i));
}

printf("___________________\n");

for(cur_name=names,cur_age=ages;(cur_age-ages)<count;cur_name++,cur_age++)
{
printf("%s lived %d years so far.\n",*cur_name,*cur_age);
}
return 0;
}

