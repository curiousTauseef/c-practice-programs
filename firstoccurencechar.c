//14 & 15
#include<stdio.h>
int main()
{
char c[100],s;
int i,j,index;
printf("enter a string : ");
gets(c);
printf("enter a character to find first occurence of : ");
scanf("%c",&s);
for(i=0;c[i];i++);
for(j=0;j<i;j++)
{
if(c[j]==s)
{
index=j;
//break;
}
}
printf("first occurence is at index : %d ",index);
return 0;
}
