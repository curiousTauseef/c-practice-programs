#include<stdio.h>
int main()
{
int i,j,count=0;
char str[100];
gets(str);
for(i=0;str[i];i++);
for(j=0;j<i;j++)
{
if(str[j-1]==' ' && ( str[j]>='a' || str[j]<='z' || str[j]>='A' || str[j]<='Z'))
{
count++;
}

}
printf("no. of words are : %d",count+1);
return 0;
}
